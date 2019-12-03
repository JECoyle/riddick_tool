#if !defined(asset_h)

global u32 global_atlas_width = 128;
global u32 global_atlas_height = 224;
u8 global_font_atlas[] = 
{
   0x01,0x00,0x00,0xff,0x01,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc3,0xff,0x01,0x00,0xff,0x07,0x01,0xf7,0xff,0xa1,0xf7,0x01,0x00,0xff,0x07,0x01,0x20,0x1c,0x1c,0x28,0x38,0x60,0x24,0x98,0x20,0x74,0x28,0x98,0x10,0xe8,0x38,0xd0,0xd0,0x30,0x01,0x00,0xff,0x07,0x01,0x20,0x1c,0x1c,0x28,0x20,0x5c,0x0c,0x08,0x30,0x94,0x20,0x78,0x24,0x98,0x18,0xe4,0x34,0xd4,0xd0,0x2c,0x03,0xff,0x05,0x03,0x1c,0x18,0x18,0x24,0x34,0x58,0x1c,0x78,0x0c,0x70,0x14,0x18,0x30,0x64,0x38,0x88,0xbc,0x0c,0x30,0xcc,0x07,0xff,0x2d,0x34,0x14,0x3c,0x10,0x48,0x1c,0x58,0x10,0x28,0x24,0x4c,0x34,0xa0,0x24,0xe0,0x40,0x20,0x8c,0x18,0x34,0xac,0x38,0xe0,0x0c,0x6c,0x14,0x78,0x1c,0x8c,0x0c,0xa4,0x08,0xb4,0x14,0x14,0x3c,0xa0,0x28,0xe0,0x60,0x20,0x68,0x18,0x38,0x88,0x34,0xc0,0x08,0xf4,0x14,0x08,0x1c,0x28,0x28,0x1c,0x1c,0x64,0x50,0xe0,0x40,0x80,0x38,0x98,0x4c,0x30,0x3c,0x84,0x38,0xc0,0x0c,0xf8,0x24,0x80,0x14,0xa4,0x08,0xb8,0x10,0xc0,0x10,0x18,0x5c,0xe0,0x38,0x20,0x4c,0xa4,0x3c,0x34,0x74,0x78,0x18,0xfc,0x1c,0x88,0x10,0xa8,0x14,0x34,0x08,0xc8,0x0c,0xd4,0x40,0xe0,0x30,0x98,0x1c,0xe8,0x34,0x60,0x20,0x98,0x20,0x60,0x3c,0xdc,0x5c,0x44,0x0c,0xf8,0x24,0xc0,0x18,0x30,0x0c,0xf8,0x18,0x20,0x3c,0xe8,0x20,0xe0,0x18,0xbc,0x10,0xd4,0x28,0x28,0x68,0x08,0x48,0x78,0x34,0xc0,0x0c,0xf4,0x18,0x88,0x08,0xa0,0x0c,0x08,0x0c,0xbc,0x20,0xcc,0x10,0x38,0x38,0xf0,0x20,0xe0,0x38,0x58,0x44,0x7c,0x3c,0xbc,0x58,0xb4,0x50,0x54,0x1c,0xc4,0x80,0x84,0x60,0x9c,0x40,0xfc,0x60,0xa0,0x64,0x58,0x88,0xc4,0x10,0x88,0x60,0x98,0x88,0xf8,0xff,0x80,0xff,0xff,0xff,0xff,0xfb,0xff,0x01,0x00,0xff,0x13,0x01,0x18,0x24,0x24,0x40,0x30,0x20,0x14,0x88,0x1c,0x9c,0x44,0x20,0x20,0x64,0x1c,0xe0,0x20,0xc8,0x94,0x18,0x20,0xfc,0x14,0xf0,0x1c,0x38,0x18,0x40,0x30,0x10,0x34,0xa0,0x3c,0x80,0x0c,0xf8,0x18,0x90,0x0c,0xec,0x20,0x20,0xa4,0x04,0x10,0xe4,0x34,0xe0,0x18,0xf4,0x20,0x3c,0x30,0x5c,0x1c,0xac,0x24,0xdc,0x24,0x08,0x1c,0x70,0x30,0x20,0x5c,0xa8,0x48,0x2c,0x28,0xe0,0x30,0xf4,0x34,0xe8,0x10,0x5c,0x30,0x10,0x30,0x70,0x30,0x80,0x10,0xec,0x20,0x20,0x4c,0xa8,0x08,0xfc,0x34,0xd0,0x28,0x34,0x10,0xf0,0x10,0xec,0x38,0xe0,0x38,0x24,0x30,0x10,0x34,0x74,0x1c,0xc4,0x20,0xec,0x28,0x34,0x40,0x0c,0x40,0x54,0x24,0x94,0x24,0xec,0x38,0xf4,0x1c,0xc0,0x08,0xdc,0x1c,0x80,0x14,0x08,0x1c,0x20,0x20,0x40,0x3c,0xa0,0x28,0xa4,0x14,0xec,0x34,0x14,0x20,0x50,0x44,0xe4,0x18,0x68,0x0c,0xf0,0x0c,0x08,0x1c,0x28,0x30,0xc0,0x40,0xa4,0x1c,0xe4,0x20,0x10,0x34,0x18,0x40,0xa4,0x2c,0x18,0x4c,0x4c,0x20,0xbc,0x28,0xec,0x28,0x28,0x24,0xc0,0x28,0x48,0x38,0x20,0x20,0x10,0x34,0xc0,0x34,0xa4,0x3c,0xd8,0x20,0xf4,0x28,0x18,0x34,0x48,0x28,0xcc,0x0c,0xf4,0x0c,0xfc,0x10,0xf8,0x30,0x10,0x20,0xc4,0x48,0x60,0x2c,0x18,0x30,0xa4,0x38,0x34,0x28,0x74,0x08,0xf4,0x10,0x08,0x2c,0xb4,0x1c,0xd8,0x1c,0x5c,0x20,0x7c,0x2c,0x9c,0x34,0xa4,0x30,0x5c,0x20,0xe4,0x1c,0x74,0x38,0xa4,0x24,0x08,0x2c,0xfc,0x2c,0x5c,0x2c,0x34,0x34,0xb8,0xff,0x2c,0x45,0xff,0x01,0x00,0xff,0x07,0x01,0xf7,0xff,0xff,0xf7,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa8,0xff,0x01,0x00,0xff,0x13,0x01,0x28,0x20,0x20,0x3c,0x30,0x40,0x24,0x9c,0x20,0x80,0x34,0xc0,0x14,0xf0,0x44,0x80,0x30,0x10,0x14,0x08,0x28,0x80,0x20,0x74,0x24,0xa0,0x10,0xb4,0x30,0x20,0x44,0x10,0x18,0x8c,0x14,0x24,0x50,0x80,0x2c,0x14,0x14,0x0c,0x44,0x80,0x18,0x8c,0x0c,0x08,0x10,0x0c,0x14,0x14,0x24,0xe0,0x50,0x20,0x3c,0xe0,0x44,0x40,0x44,0x20,0x28,0x14,0x38,0xd0,0x38,0xc0,0x0c,0x08,0x1c,0x0c,0x18,0x20,0x18,0x54,0x48,0x40,0x24,0x10,0x1c,0xe0,0x44,0x40,0x44,0x20,0x28,0x14,0x2c,0xd0,0x18,0xc8,0x40,0xa0,0x1c,0x70,0x2c,0x40,0x14,0xb4,0x14,0xc0,0x18,0x60,0x18,0xe4,0x30,0xe0,0x1c,0xd0,0x1c,0xcc,0x18,0x64,0x28,0xec,0x40,0xc8,0x24,0xd0,0x34,0x58,0x20,0x8c,0x48,0x20,0x38,0xb4,0x1c,0xf0,0x34,0xe0,0x40,0x40,0x24,0x20,0x2c,0xe0,0x20,0xc8,0x08,0xf0,0x18,0x50,0x54,0xe0,0x2c,0xc0,0x2c,0x40,0x0c,0xcc,0x38,0x60,0x40,0xe0,0x40,0x40,0x24,0x20,0x2c,0xe0,0x20,0xc8,0x30,0xc0,0x44,0xe0,0x2c,0xc0,0x34,0x40,0x3c,0x80,0x44,0x10,0x24,0x80,0x1c,0xa0,0x3c,0xc0,0x2c,0x14,0x34,0xc0,0x20,0x10,0x50,0xc0,0x24,0xe0,0x08,0xf0,0x10,0x08,0x2c,0x80,0x10,0x38,0x14,0xc4,0x14,0x24,0x34,0x3c,0x14,0xbc,0x10,0x74,0x30,0x80,0x2c,0xe0,0x18,0x30,0x20,0x4c,0x1c,0x10,0x40,0xa0,0x24,0x74,0x18,0xc0,0xff,0x0c,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcf,0xff,0x04,0x00,0xff,0xff,0xff,0xff,0xfb,0xff,0xa5,0xfb,0x01,0x00,0xff,0x0b,0x01,0x4c,0x34,0x34,0x58,0x10,0x90,0x18,0x9c,0x1c,0x20,0x38,0x40,0x08,0xcc,0x20,0x80,0x1c,0x90,0x30,0x20,0x1c,0x78,0x40,0x60,0x1c,0xc4,0x18,0xbc,0x2c,0x04,0x28,0x54,0x30,0x60,0x28,0xe0,0x58,0x20,0x20,0xe0,0x4c,0xa0,0x14,0xd8,0x68,0xe0,0x18,0xfc,0x18,0x28,0x20,0x38,0x1c,0x6c,0x1c,0x80,0x30,0x40,0x54,0x20,0x4c,0xe0,0x2c,0xc0,0x30,0x18,0x24,0xe0,0x2c,0xcc,0x28,0x60,0x30,0x54,0x3c,0x14,0x20,0xe0,0x54,0x20,0x2c,0xe0,0x4c,0xa0,0x1c,0xd8,0x08,0xf4,0x1c,0xec,0x20,0xac,0x24,0xf0,0x30,0x50,0x2c,0x24,0x34,0x1c,0x0c,0xf8,0x0c,0x0c,0x28,0xb0,0x20,0x40,0x18,0x64,0x28,0xe0,0x28,0x80,0x24,0x20,0x24,0x38,0x30,0x80,0x24,0xc4,0x44,0x3c,0x24,0x5c,0x34,0x1c,0x34,0x78,0x0c,0xe8,0x08,0xf4,0x2c,0xa0,0x20,0x54,0x34,0x80,0x24,0x20,0x1c,0x38,0x1c,0xc4,0x10,0xe4,0x28,0xa8,0x28,0xfc,0x40,0x1c,0x3c,0x14,0x20,0xb8,0x0c,0xf0,0x0b,0xff,0x11,0x14,0x2c,0xa4,0x14,0xe8,0x18,0xfc,0x20,0x2c,0x18,0x4c,0x20,0x2c,0x34,0xc4,0x2c,0xa4,0x2c,0xfc,0x50,0x64,0x2c,0x24,0x30,0x90,0x08,0xec,0x08,0xf0,0x18,0x20,0x1c,0xf0,0x28,0x14,0x28,0x40,0x24,0x90,0x20,0x08,0x48,0x8c,0x1c,0xcc,0x20,0x1c,0x38,0x54,0x3c,0x14,0x2c,0x90,0x10,0x08,0x24,0xac,0x1c,0x3c,0x28,0xe0,0x2c,0x40,0x20,0x1c,0x10,0xf0,0x20,0xc0,0x20,0xa4,0x18,0xe0,0x20,0xcc,0x14,0xe8,0x10,0xf4,0x34,0x38,0x1c,0x74,0x24,0xa0,0x30,0x54,0x3c,0x44,0xf4,0x3c,0x01,0x00,0xff,0x0b,0x01,0x5c,0x34,0xff,0x28,0xff,0xff,0xff,0xff,0xff,0xff,0x34,0xff,0x01,0x00,0xff,0x07,0x01,0xf7,0xff,0xff,0xf7,0x06,0xff,0x01,0x00,0xff,0x07,0x01,0x60,0x34,0x6c,0x50,0xff,0x48,0x31,0xff,0x01,0x00,0xff,0x07,0x01,0x58,0x30,0x70,0x50,0x48,0xf0,0x24,0xe8,0x70,0xbc,0x58,0x68,0x2c,0xc8,0x50,0xf4,0x34,0x50,0x08,0xb0,0x0c,0x08,0x50,0xec,0x24,0xe8,0x14,0xbc,0x0c,0xd0,0x20,0x20,0xb4,0x04,0x50,0xc0,0x34,0x50,0x10,0x84,0x2c,0x90,0x50,0xc0,0x1c,0xd0,0x14,0xdc,0x60,0x80,0x4c,0xc4,0x1c,0xc0,0x18,0x20,0x20,0x40,0x24,0x44,0x1c,0x5c,0x0c,0xa0,0x58,0xc0,0x3c,0x10,0x0c,0xf4,0x1c,0xfc,0x28,0xbc,0x10,0xec,0x24,0xbc,0x3c,0xe0,0x18,0x70,0x38,0x20,0x3c,0x60,0x14,0xe4,0x20,0xdc,0x48,0xb0,0x20,0xc8,0x24,0xa0,0x28,0x34,0x18,0xc0,0x0c,0x08,0x20,0x0c,0x30,0xe0,0x28,0xd4,0x40,0x10,0x3c,0x60,0x18,0xbc,0x1c,0xd4,0x48,0xb0,0x20,0xc8,0x18,0xec,0x10,0xc0,0x30,0x58,0x14,0x40,0x10,0x54,0x14,0x18,0x30,0xe0,0x28,0xd4,0x40,0x10,0x38,0x60,0x0c,0x08,0x20,0xa4,0x4c,0xc0,0x28,0xc8,0x18,0xec,0x0c,0xe0,0x20,0x20,0x20,0xc0,0x14,0x48,0x30,0x60,0x24,0xc8,0x2c,0x40,0x30,0x20,0x40,0x60,0x24,0xa4,0x4c,0xc0,0x40,0x88,0x0c,0xe0,0x20,0x20,0x20,0xdc,0x14,0x48,0x30,0x60,0x24,0xc8,0x18,0xfc,0x10,0x08,0x18,0x1c,0x20,0x40,0x24,0x60,0x34,0x40,0x2c,0xc0,0x18,0x3c,0x38,0x64,0x18,0x88,0x0c,0xf4,0x20,0xc0,0x20,0xdc,0x14,0x48,0x30,0x60,0x20,0xc4,0xe0,0x1c,0x03,0xff,0x05,0x03,0x54,0x50,0x50,0x5c,0xff,0x48,0x45,0xff,0x01,0x00,0xff,0x07,0x01,0x18,0x10,0x4c,0x60,0x50,0x5c,0xff,0x48,0x49,0xff,0x01,0x00,0xff,0x0f,0x01,0x5c,0x60,0x93,0xff,0xff,0x93,0xff,0xff,0xff,0xff,0x94,0xff,0x01,0x00,0xff,0x07,0x01,0x20,0x14,0x24,0x1c,0xc4,0x14,0xe0,0xe0,0x24,0xec,0x18,0x18,0x28,0x20,0xbc,0x18,0xdc,0xdc,0x28,0xec,0x18,0x18,0x28,0x20,0xbc,0x18,0xdc,0xdc,0x28,0xec,0x18,0x18,0x28,0x20,0x40,0x90,0x0c,0x08,0x20,0x24,0x40,0x40,0x0c,0xe8,0x28,0x7c,0x24,0x10,0x1c,0xa0,0x08,0xec,0x20,0x34,0x38,0x10,0x20,0xc8,0x18,0xd0,0x28,0x08,0x1c,0x58,0x38,0x54,0x3c,0xf0,0x14,0xd0,0x14,0xfc,0x20,0x60,0x30,0xdc,0x3c,0x80,0x18,0xa8,0x08,0xf4,0x34,0xc0,0x24,0xe0,0x24,0xe8,0x24,0x14,0x1c,0xe0,0x14,0xd4,0x34,0x54,0x4c,0xf0,0x28,0xf8,0x1c,0x44,0x2c,0xa0,0x14,0x8c,0x10,0x20,0x24,0x28,0x2c,0x80,0x2c,0xe8,0x28,0x24,0x2c,0x5c,0x14,0x9c,0x2c,0x64,0x20,0xe0,0x30,0x20,0x20,0xf8,0x18,0xc4,0x18,0xb0,0x2c,0xa0,0x14,0xf8,0x10,0x20,0x24,0x28,0x2c,0x80,0x24,0xc4,0x34,0x68,0x50,0x60,0x28,0x90,0x40,0x10,0x30,0x60,0x10,0xfc,0x1c,0x1c,0x20,0xb0,0x14,0xf8,0x14,0x5c,0x18,0xf4,0x20,0x9c,0x24,0xc0,0x18,0x88,0x1c,0x40,0x1c,0x18,0x28,0x20,0x38,0x18,0x10,0xfc,0x1c,0x9c,0x14,0x24,0x24,0x98,0x20,0x60,0x10,0x88,0x30,0x40,0x20,0x84,0x0c,0xd8,0x20,0xc0,0x14,0xd0,0x13,0xff,0x11,0x40,0x24,0xe4,0x1c,0xac,0x38,0x38,0x40,0x10,0x30,0x58,0x58,0x88,0xa8,0x50,0x07,0xff,0x01,0x00,0xff,0x50,0x44,0x1c,0x58,0x44,0x74,0x48,0xd0,0x5c,0x8c,0x94,0x54,0x10,0xf0,0x10,0x10,0xd0,0xe0,0x50,0x30,0xc4,0x28,0x08,0xf4,0xf4,0xfc,0xff,0xec,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};

#pragma pack(push, 1)
typedef struct
{
   u16 signature;
   u32 file_size;
   u16 reserved0;
   u16 reserved1;
   u32 offset_data;
   u32 bi_size;
   u32 width;
   u32 height;
   u16 planes;
   u16 bit_count;
   u32 compression;
   u32 size;
   u32 x_pixels_per_meter;
   u32 y_pixels_per_meter;
   u32 colors_used;
   u32 colors_important;
   u32 red_mask;
   u32 green_mask;
   u32 blue_mask;
   u32 alpha_mask;
} Bitmap_Header;
#pragma pack(pop)

typedef struct
{
   void *memory;
   u32 width;
   u32 height;
} Bitmap;

typedef struct
{
   void *memory;
   u32 width;
   u32 height;
} Atlas;

typedef struct
{
   Rect rect;
} Glyph;

typedef struct
{
   Glyph glyphs[256];

   Atlas atlas;

   u8 glyph_width;
   u8 glyph_height;
   u8 advance_x;
   u8 advance_y;
} Font;

typedef struct
{
   Font font;
} Assets;

#define asset_h
#endif