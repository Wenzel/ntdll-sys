/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS UserMode PnP
 * FILE:            include/reactos/libs/umpnpmgr/sysguid.h
 * PURPOSE:         GUIDs shared between umpnpmgr and the Kernel PnP Manager
 * PROGRAMMERS:     Eric Kohl
 */

#ifndef _SYSGUID_H
#define _SYSGUID_H

DEFINE_GUID(GUID_DEVICE_STANDBY_VETOED,
  0x03B21C13, 0x18D6, 0x11D3, 0x97, 0xDB, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_KERNEL_INITIATED_EJECT,
  0x14689B54, 0x0703, 0x11D3, 0x97, 0xD2, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_REMOVAL_VETOED,
  0x60DBD5FA, 0xDDD2, 0x11D2, 0x97, 0xB8, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_HIBERNATE_VETOED,
  0x61173AD9, 0x194F, 0x11D3, 0x97, 0xDC, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_SAFE_REMOVAL,
  0x8FBEF967, 0xD6C5, 0x11D2, 0x97, 0xB5, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);

DEFINE_GUID(GUID_DEVICE_ARRIVAL,
  0xCB3A4009, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_ENUMERATED,
  0xCB3A400A, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_ENUMERATE_REQUEST,
  0xCB3A400B, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_START_REQUEST,
  0xCB3A400C, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_REMOVE_PENDING,
  0xCB3A400D, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_QUERY_AND_REMOVE,
  0xCB3A400E, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_EJECT,
  0xCB3A400F, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_NOOP,
  0xCB3A4010, 0x46F0, 0x11D0, 0xB0, 0x8F, 0x00, 0x60, 0x97, 0x13, 0x05, 0x3F);
DEFINE_GUID(GUID_DEVICE_WARM_EJECT_VETOED,
  0xCBF4C1F9, 0x18D5, 0x11D3, 0x97, 0xDB, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_SURPRISE_REMOVAL,
  0xCE5AF000, 0x80DD, 0x11D2, 0xA8, 0x8D, 0x00, 0xA0, 0xC9, 0x69, 0x6B, 0x4B);
DEFINE_GUID(GUID_DEVICE_EJECT_VETOED,
  0xCF7B71E8, 0xD8FD, 0x11D2, 0x97, 0xB5, 0x00, 0xA0, 0xC9, 0x40, 0x52, 0x2E);
DEFINE_GUID(GUID_DEVICE_EVENT_RBC,
  0xD0744792, 0xA98E, 0x11D2, 0x91, 0x7A, 0x00, 0xA0, 0xC9, 0x06, 0x8F, 0xF3);

#endif
