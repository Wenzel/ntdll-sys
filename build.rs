extern crate bindgen;
use std::path::Path;

use std::env;
use std::path::PathBuf;

fn main() {

    // what library to link with
    println!("cargo:rustc-link-lib=dylib=ntdll");

    let build_source = Path::new(file!());
    let project_root = build_source.parent().unwrap();
    let include_dir = project_root.join("src/include");
    let ndk_inc_dir = include_dir.join("ndk");
    let ddk_inc_dir = include_dir.join("ddk");

    // The bindgen::Builder is the main entry point
    // to bindgen, and lets you build up options for
    // the resulting bindings.
    let bindings = bindgen::Builder::default()
        // The input header we would like to generate
        // bindings for.
        .header("src/wrapper.h")
        .clang_arg(format!("-I{}", include_dir.to_str().unwrap()))
        .clang_arg(format!("-I{}", ndk_inc_dir.to_str().unwrap()))
        .clang_arg(format!("-I{}", ddk_inc_dir.to_str().unwrap()))
        .whitelist_function("Nt.*")
        // Finish the builder and generate the bindings.
        .generate()
        // Unwrap the Result and panic on failure.
        .expect("Unable to generate bindings");

    // Write the bindings to the $OUT_DIR/bindings.rs file.
    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}
