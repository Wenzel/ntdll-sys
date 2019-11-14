use std::env;
extern crate ntdll_sys;
extern crate env_logger;

// traits method can only be used if the trait is in the scope
use microvmi::api::{Introspectable, Registers};

fn main() {
    env_logger::init();

}
