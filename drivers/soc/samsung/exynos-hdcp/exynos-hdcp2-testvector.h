/* soc/samsung/exynos-hdcp/exynos-hdcp2-testvector.h
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __EXYNOS_HDCP2_TEST_VECTOR_H__
#define __EXYNOS_HDCP2_TEST_VECTOR_H__

#include "exynos-hdcp2-config.h"
#include "exynos-hdcp2-protocol-msg.h"

#ifdef TEST_VECTOR_1
unsigned char cert[522] = {
	0x74, 0x5b, 0xb8, 0xbd, 0x04, 0xbc, 0x83, 0xc7,
	0x95, 0x78, 0xf9, 0x0c, 0x91, 0x4b, 0x89, 0x38,
	0x05, 0x5a, 0xa4, 0xac, 0x1f, 0xa8, 0x03, 0x93,
	0x82, 0x79, 0x75, 0xaf, 0x66, 0x22, 0xde, 0x43,
	0x80, 0x8d, 0xcd, 0x5d, 0x90, 0xb8, 0x3c, 0xb3,
	0xd8, 0x9e, 0xb0, 0x0d, 0x09, 0x44, 0xf4, 0x3f,
	0x5f, 0xab, 0xb9, 0xc4, 0xc9, 0x96, 0xef, 0x78,
	0xb5, 0x8f, 0x69, 0x77, 0xb4, 0x7d, 0x08, 0x14,
	0x9c, 0x81, 0xa0, 0x8f, 0x04, 0x1f, 0xa0, 0x88,
	0xe1, 0x20, 0xc7, 0x34, 0x4a, 0x49, 0x35, 0x65,
	0x99, 0xcf, 0x53, 0x19, 0xf0, 0xc6, 0x81, 0x76,
	0x05, 0x5c, 0xb9, 0xde, 0xdd, 0xab, 0x3d, 0xb0,
	0x92, 0xa1, 0x23, 0x4f, 0x0c, 0x71, 0x30, 0x42,
	0x78, 0xf6, 0x55, 0xae, 0xbd, 0x36, 0x25, 0x8e,
	0x25, 0x0d, 0x4e, 0x5e, 0x8e, 0x77, 0x6a, 0x60,
	0xe3, 0xc1, 0xe9, 0xee, 0xcd, 0x2b, 0x9e, 0x18,
	0x63, 0x97, 0xd4, 0xe6, 0x75, 0x01, 0x00, 0x01,
	0x00, 0x00, 0x1d, 0x0a, 0x61, 0xea, 0xab, 0xf8,
	0xa8, 0x2b, 0x02, 0x69, 0xa1, 0x34, 0xfd, 0x91,
	0xac, 0x2b, 0xf2, 0x8f, 0x34, 0x8b, 0xd4, 0x84,
	0xfa, 0x62, 0xbc, 0x01, 0x4a, 0x4a, 0xa2, 0xb2,
	0x14, 0xbf, 0xb5, 0xf4, 0xdf, 0xac, 0x80, 0x93,
	0x0d, 0x13, 0xec, 0x9c, 0xe5, 0xd8, 0x34, 0x70,
	0x51, 0x9a, 0x66, 0x80, 0xeb, 0xbe, 0xcc, 0x7e,
	0x45, 0xf0, 0xe6, 0x39, 0x63, 0x84, 0xc9, 0xb9,
	0x8e, 0x8c, 0xaf, 0x9c, 0xa9, 0xd4, 0x0e, 0xeb,
	0x9a, 0x57, 0x2a, 0x17, 0x41, 0xca, 0x97, 0xf3,
	0x19, 0x96, 0xb5, 0x5d, 0x0f, 0x30, 0xa3, 0x84,
	0xe5, 0x73, 0xa2, 0xed, 0x05, 0x69, 0x7a, 0x22,
	0xce, 0x84, 0x1f, 0x3e, 0x39, 0x9e, 0x28, 0x76,
	0xc9, 0xbc, 0x89, 0x5b, 0x70, 0xb1, 0x7b, 0xf4,
	0xed, 0xb6, 0x74, 0x12, 0xab, 0x48, 0x29, 0x64,
	0xce, 0x6c, 0x60, 0x04, 0xeb, 0xa9, 0x7a, 0xa2,
	0x15, 0xa6, 0x58, 0x9a, 0xad, 0x32, 0xc7, 0x53,
	0x39, 0xe5, 0xfe, 0xf0, 0x37, 0xa7, 0xa0, 0xc5,
	0xff, 0xec, 0xd9, 0xb0, 0x05, 0xbb, 0x25, 0x13,
	0xa0, 0xa4, 0xc7, 0x0b, 0x2a, 0x5d, 0xc6, 0x8f,
	0x51, 0x11, 0xcb, 0x36, 0xed, 0x5c, 0x17, 0x7e,
	0x22, 0x20, 0xc3, 0xeb, 0x40, 0x8c, 0x67, 0xbb,
	0x1c, 0xd2, 0x47, 0xb0, 0xe0, 0xbd, 0xe7, 0x4c,
	0xcd, 0x5d, 0xd5, 0x23, 0x12, 0xf8, 0x3b, 0x1d,
	0x91, 0x3b, 0xf3, 0xc7, 0x60, 0xea, 0x90, 0x24,
	0x48, 0xe5, 0x92, 0x21, 0x6c, 0xf6, 0xd9, 0x5e,
	0x76, 0x8d, 0x2b, 0x86, 0xa6, 0x7c, 0x16, 0xae,
	0xa8, 0x36, 0x08, 0xa0, 0x37, 0x14, 0x1a, 0xd7,
	0x03, 0xe1, 0x40, 0x31, 0xca, 0x6c, 0x95, 0xe0,
	0x10, 0xb0, 0x43, 0xcf, 0xb7, 0xe0, 0x30, 0x05,
	0xb9, 0xac, 0xb7, 0x08, 0x68, 0xcd, 0x7e, 0x11,
	0x47, 0x2a, 0x03, 0x3b, 0xeb, 0x74, 0xc8, 0x19,
	0x62, 0x8b, 0x2f, 0x11, 0x91, 0xb6, 0x06, 0x4f,
	0xe0, 0x2a, 0x44, 0x20, 0x43, 0x29, 0x13, 0x1f,
	0xdd, 0xd0, 0x4a, 0x11, 0x6c, 0x0e, 0x83, 0xbf,
	0x22, 0x62, 0x3b, 0xeb, 0xec, 0xd7, 0x76, 0x28,
	0xba, 0x64, 0x88, 0x42, 0xc8, 0x73, 0xa7, 0x9e,
	0x4a, 0x69, 0x3a, 0xb2, 0x0c, 0x4b, 0x3a, 0xd9,
	0x50, 0xdb, 0x7c, 0x51, 0xee, 0x15, 0xe0, 0x6b,
	0x2c, 0x63, 0xa6, 0x91, 0x57, 0xdd, 0xbf, 0x17,
	0x47, 0x23, 0xad, 0x15, 0xcb, 0xb9, 0x91, 0x18,
	0x0b, 0x51, 0x8f, 0xf9, 0x1c, 0x51, 0x67, 0xc1,
	0x0b, 0x78, 0xf5, 0xd9, 0x55, 0xdc, 0x48, 0xe4,
	0xc0, 0x83, 0xa5, 0xdf, 0x75, 0xe2, 0xdc, 0x88,
	0xd2, 0xc6, 0xdd, 0xdf, 0x1f, 0x37, 0x90, 0x35,
	0xf6, 0xfd, 0xda, 0xe0, 0x04, 0x32, 0x69, 0xc1,
	0xaf, 0xd9, 0xf9, 0x11, 0xc5, 0xaa, 0x74, 0x58,
	0x32, 0x1c, 0x71, 0xaa, 0xa7, 0x14, 0xfb, 0x23,
	0x17, 0x22};

/* HDCP2.2 R1 */
unsigned char cert_v22[522] = {
	0x74, 0x5b, 0xb8, 0xbd, 0x04, 0xaf, 0xb5, 0xc5,
	0xc6, 0x7b, 0xc5, 0x3a, 0x34, 0x90, 0xa9, 0x54,
	0xc0, 0x8f, 0xb7, 0xeb, 0xa1, 0x54, 0xd2, 0x4f,
	0x22, 0xde, 0x83, 0xf5, 0x03, 0xa6, 0xc6, 0x68,
	0x46, 0x9b, 0xc0, 0xb8, 0xc8, 0x6c, 0xdb, 0x26,
	0xf9, 0x3c, 0x49, 0x2f, 0x02, 0xe1, 0x71, 0xdf,
	0x4e, 0xf3, 0x0e, 0xc8, 0xbf, 0x22, 0x9d, 0x04,
	0xcf, 0xbf, 0xa9, 0x0d, 0xff, 0x68, 0xab, 0x05,
	0x6f, 0x1f, 0x12, 0x8a, 0x68, 0x62, 0xeb, 0xfe,
	0xc9, 0xea, 0x9f, 0xa7, 0xfb, 0x8c, 0xba, 0xb1,
	0xbd, 0x65, 0xac, 0x35, 0x9c, 0xa0, 0x33, 0xb1,
	0xdd, 0xa6, 0x05, 0x36, 0xaf, 0x00, 0xa2, 0x7f,
	0xbc, 0x07, 0xb2, 0xdd, 0xb5, 0xcc, 0x57, 0x5c,
	0xdc, 0xc0, 0x95, 0x50, 0xe5, 0xff, 0x1f, 0x20,
	0xdb, 0x59, 0x46, 0xfa, 0x47, 0xc4, 0xed, 0x12,
	0x2e, 0x9e, 0x22, 0xbd, 0x95, 0xa9, 0x85, 0x59,
	0xa1, 0x59, 0x3c, 0xc7, 0x83, 0x01, 0x00, 0x01,
	0x10, 0x00, 0x0b, 0xa3, 0x73, 0x77, 0xdd, 0x03,
	0x18, 0x03, 0x8a, 0x91, 0x63, 0x29, 0x1e, 0xa2,
	0x95, 0x74, 0x42, 0x90, 0x78, 0xd0, 0x67, 0x25,
	0xb6, 0x32, 0x2f, 0xcc, 0x23, 0x2b, 0xad, 0x21,
	0x39, 0x3d, 0x14, 0xba, 0x37, 0xa3, 0x65, 0x14,
	0x6b, 0x9c, 0xcf, 0x61, 0x20, 0x44, 0xa1, 0x07,
	0xbb, 0xcf, 0xc3, 0x4e, 0x95, 0x5b, 0x10, 0xcf,
	0xc7, 0x6f, 0xf1, 0xc3, 0x53, 0x7c, 0x63, 0xa1,
	0x8c, 0xb2, 0xe8, 0xab, 0x2e, 0x96, 0x97, 0xc3,
	0x83, 0x99, 0x70, 0xd3, 0xdc, 0x21, 0x41, 0xf6,
	0x0a, 0xd1, 0x1a, 0xee, 0xf4, 0xcc, 0xeb, 0xfb,
	0xa6, 0xaa, 0xb6, 0x9a, 0xaf, 0x1d, 0x16, 0x5e,
	0xe2, 0x83, 0xa0, 0x4a, 0x41, 0xf6, 0x7b, 0x07,
	0xbf, 0x47, 0x85, 0x28, 0x6c, 0xa0, 0x77, 0xa6,
	0xa3, 0xd7, 0x85, 0xa5, 0xc4, 0xa7, 0xe7, 0x6e,
	0xb5, 0x1f, 0x40, 0x72, 0x97, 0xfe, 0xc4, 0x81,
	0x23, 0xa0, 0xc2, 0x90, 0xb3, 0x49, 0x24, 0xf5,
	0xb7, 0x90, 0x2c, 0xbf, 0xfe, 0x04, 0x2e, 0x00,
	0xa9, 0x5f, 0x86, 0x04, 0xca, 0xc5, 0x3a, 0xcc,
	0x26, 0xd9, 0x39, 0x7e, 0xa9, 0x2d, 0x28, 0x6d,
	0xc0, 0xcc, 0x6e, 0x81, 0x9f, 0xb9, 0xb7, 0x11,
	0x33, 0x32, 0x23, 0x47, 0x98, 0x43, 0x0d, 0xa5,
	0x1c, 0x59, 0xf3, 0xcd, 0xd2, 0x4a, 0xb7, 0x3e,
	0x69, 0xd9, 0x21, 0x53, 0x9a, 0xf2, 0x6e, 0x77,
	0x62, 0xae, 0x50, 0xda, 0x85, 0xc6, 0xaa, 0xc4,
	0xb5, 0x1c, 0xcd, 0xa8, 0xa5, 0xdd, 0x6e, 0x62,
	0x73, 0xff, 0x5f, 0x7b, 0xd7, 0x3c, 0x17, 0xba,
	0x47, 0x0c, 0x89, 0x0e, 0x62, 0x79, 0x43, 0x94,
	0xaa, 0xa8, 0x47, 0xf4, 0x4c, 0x38, 0x89, 0xa8,
	0x81, 0xad, 0x23, 0x13, 0x27, 0x0c, 0x17, 0xcf,
	0x3d, 0x83, 0x84, 0x57, 0x36, 0xe7, 0x22, 0x26,
	0x2e, 0x76, 0xfd, 0x56, 0x80, 0x83, 0xf6, 0x70,
	0xd4, 0x5c, 0x91, 0x48, 0x84, 0x7b, 0x18, 0xdb,
	0x0e, 0x15, 0x3b, 0x49, 0x26, 0x23, 0xe6, 0xa3,
	0xe2, 0xc6, 0x3a, 0x23, 0x57, 0x66, 0xb0, 0x72,
	0xb8, 0x12, 0x17, 0x4f, 0x86, 0xfe, 0x48, 0x0d,
	0x53, 0xea, 0xfe, 0x31, 0x48, 0x7d, 0x86, 0xde,
	0xeb, 0x82, 0x86, 0x1e, 0x62, 0x03, 0x98, 0x59,
	0x00, 0x37, 0xeb, 0x61, 0xe9, 0xf9, 0x7a, 0x40,
	0x78, 0x1c, 0xba, 0xbc, 0x0b, 0x88, 0xfb, 0xfd,
	0x9d, 0xd5, 0x01, 0x11, 0x94, 0xe0, 0x35, 0xbe,
	0x33, 0xe8, 0xe5, 0x36, 0xfb, 0x9c, 0x45, 0xcb,
	0x75, 0xaf, 0xd6, 0x35, 0xff, 0x78, 0x92, 0x7f,
	0xa1, 0x7c, 0xa8, 0xfc, 0xb7, 0xf7, 0xa8, 0x52,
	0xa9, 0xc6, 0x84, 0x72, 0x3d, 0x1c, 0xc9, 0xdf,
	0x35, 0xc6, 0xe6, 0x00, 0xe1, 0x48, 0x72, 0xce,
	0x83, 0x1b, 0xcc, 0xf8, 0x33, 0x2d, 0x4f, 0x98,
	0x75, 0x00, 0x3c, 0x41, 0xdf, 0x7a, 0xed, 0x38,
	0x53, 0xb1};
#else
unsigned char cert[522] = {
	0x8b, 0xa4, 0x47, 0x42, 0xfb, 0xc9, 0x1b, 0x82,
	0xe2, 0x76, 0x7f, 0x90, 0x4f, 0xe9, 0x12, 0x33,
	0x7c, 0x21, 0x1f, 0x7b, 0x25, 0xda, 0x76, 0xde,
	0xae, 0x59, 0x70, 0xf7, 0xc2, 0xe7, 0xe0, 0x4a,
	0xcf, 0xbd, 0x5b, 0xba, 0x1c, 0x36, 0x4e, 0xe3,
	0x78, 0x4c, 0x92, 0x6a, 0x3c, 0xd8, 0xc1, 0xe9,
	0x51, 0xa9, 0x35, 0xeb, 0xd8, 0xe8, 0xd5, 0x3e,
	0x3b, 0x1d, 0x00, 0xc1, 0x16, 0x16, 0xd0, 0x58,
	0xeb, 0x2a, 0x4b, 0xa0, 0x76, 0x9c, 0xd0, 0xe4,
	0xb2, 0x23, 0xdc, 0xaa, 0x37, 0x07, 0xe5, 0x85,
	0x1a, 0xaa, 0x13, 0x55, 0x01, 0x4e, 0xed, 0x88,
	0xca, 0x3f, 0xfb, 0xc5, 0x58, 0x46, 0x91, 0xec,
	0x35, 0x99, 0x08, 0x1c, 0xa1, 0x22, 0x64, 0xe8,
	0x3c, 0x2e, 0x70, 0xdf, 0xa9, 0x10, 0x14, 0x81,
	0x46, 0xa2, 0x38, 0x08, 0xef, 0x1b, 0xd2, 0x46,
	0xee, 0x38, 0x0d, 0x6d, 0x92, 0xd3, 0xf2, 0x02,
	0xe7, 0xe4, 0x29, 0xad, 0x0d, 0x01, 0x00, 0x01,
	0x00, 0x00, 0x91, 0x18, 0x81, 0xa5, 0xcd, 0xab,
	0x78, 0x50, 0xad, 0x1d, 0x3b, 0x77, 0xbe, 0x51,
	0x32, 0x9f, 0x04, 0xe6, 0x3e, 0xf7, 0x01, 0x39,
	0xf2, 0x59, 0x98, 0x75, 0x9d, 0x29, 0x12, 0x33,
	0x39, 0xb4, 0x80, 0x91, 0x9d, 0x6a, 0xff, 0x0d,
	0x5c, 0x59, 0x22, 0x43, 0x77, 0xfc, 0xed, 0xc2,
	0x40, 0x9d, 0xe2, 0xd1, 0x4b, 0xff, 0x02, 0x78,
	0x36, 0xd3, 0xad, 0xcb, 0xa6, 0xd3, 0xd3, 0x9d,
	0xcc, 0xff, 0xcb, 0x3c, 0xa3, 0xcb, 0xfd, 0xdf,
	0xcf, 0xe2, 0x85, 0xa8, 0xbd, 0xa2, 0xf6, 0x60,
	0x06, 0xb2, 0x9b, 0x53, 0xc4, 0xd6, 0x22, 0xbd,
	0x65, 0x3c, 0x6f, 0x40, 0x01, 0x7c, 0x2c, 0x78,
	0x89, 0x31, 0x70, 0x47, 0x56, 0x88, 0xf5, 0x56,
	0x33, 0xf2, 0x0a, 0x91, 0x27, 0xb1, 0x68, 0x5f,
	0x84, 0x98, 0x1d, 0x37, 0xbd, 0x69, 0x11, 0x6d,
	0x60, 0xca, 0x01, 0x44, 0xbe, 0xfa, 0x92, 0x1f,
	0xec, 0x15, 0xbe, 0x37, 0x68, 0xd1, 0xdc, 0xcc,
	0x66, 0x7c, 0xc4, 0x8b, 0x78, 0x51, 0xd9, 0x81,
	0xdf, 0xaa, 0xe2, 0x70, 0x2f, 0x02, 0x59, 0x10,
	0x64, 0xb2, 0x93, 0x6d, 0x09, 0x23, 0xa9, 0x7d,
	0x0a, 0xdb, 0x8a, 0x34, 0x53, 0xca, 0xe2, 0x6a,
	0x6d, 0x39, 0xfb, 0x25, 0x5e, 0x38, 0x86, 0xeb,
	0x4d, 0xa1, 0xc1, 0xea, 0xbd, 0xac, 0x1d, 0x14,
	0x46, 0xac, 0x58, 0x86, 0x55, 0xec, 0x40, 0x9f,
	0xdc, 0x4f, 0x80, 0xf2, 0x68, 0x0c, 0x81, 0xa3,
	0xdf, 0x01, 0xa0, 0x62, 0x44, 0x9e, 0x20, 0x42,
	0x89, 0x88, 0x24, 0xb2, 0x6a, 0x40, 0x11, 0x4b,
	0x96, 0x33, 0xba, 0x0d, 0xae, 0x49, 0x98, 0x4b,
	0x24, 0x16, 0x5f, 0xff, 0x85, 0x86, 0x4a, 0x09,
	0xcd, 0xce, 0x30, 0xf2, 0xfa, 0xff, 0x74, 0x28,
	0x40, 0x97, 0xa5, 0x56, 0x29, 0x74, 0x53, 0xa2,
	0x34, 0xe4, 0xee, 0xe0, 0x45, 0xb6, 0xd8, 0xa7,
	0x9b, 0xa0, 0x1a, 0x00, 0x2d, 0xff, 0x8d, 0x2f,
	0xed, 0x70, 0x15, 0xc5, 0xe0, 0x11, 0xbb, 0xc8,
	0xef, 0x5b, 0x2c, 0xb3, 0x12, 0x0f, 0xbe, 0x88,
	0x7c, 0x98, 0x44, 0x3c, 0x65, 0x45, 0xbc, 0x20,
	0xac, 0x07, 0xe2, 0x4c, 0x74, 0x2a, 0xb4, 0xb1,
	0x0e, 0x47, 0x2a, 0xd6, 0x20, 0x19, 0xce, 0x75,
	0x18, 0x45, 0x28, 0x90, 0x4f, 0x84, 0x42, 0x81,
	0x37, 0xed, 0x1d, 0x0b, 0x48, 0xf7, 0x53, 0xe3,
	0x92, 0xf2, 0xeb, 0xdf, 0x7a, 0x91, 0xdf, 0xe8,
	0xdb, 0xb1, 0xc4, 0xfd, 0xfd, 0xc1, 0xad, 0x4e,
	0xcc, 0xbe, 0x11, 0xe2, 0x76, 0x9b, 0x78, 0x2b,
	0xb8, 0xf4, 0x0e, 0x9d, 0x05, 0xd6, 0x08, 0xd0,
	0x76, 0x2c, 0xe8, 0x4d, 0xee, 0x3d, 0x31, 0xda,
	0xc4, 0xf7, 0x01, 0x12, 0x8f, 0x5d, 0x94, 0xe6,
	0xcb, 0x15, 0xfe, 0x53, 0x42, 0xb2, 0x51, 0x8c,
	0x5d, 0xc7, 0x64, 0xde, 0x14, 0x8f, 0xaf, 0xc1,
	0xaf, 0x36};

/* HDCP 2.2 R2 */
unsigned char cert_v22[522] = {
	0x8b, 0xa4, 0x47, 0x42, 0xfb, 0xe4, 0x68, 0x63,
	0x8a, 0xda, 0x97, 0x2d, 0xde, 0x9a, 0x8d, 0x1c,
	0xb1, 0x65, 0x4b, 0x85, 0x8d, 0xe5, 0x46, 0xd6,
	0xdb, 0x95, 0xa5, 0xf6, 0x66, 0x74, 0xea, 0x81,
	0x0b, 0x9a, 0x58, 0x58, 0x66, 0x26, 0x86, 0xa6,
	0xb4, 0x56, 0x2b, 0x29, 0x43, 0xe5, 0xbb, 0x81,
	0x74, 0x86, 0xa7, 0xb7, 0x16, 0x2f, 0x07, 0xec,
	0xd1, 0xb5, 0xf9, 0xae, 0x4f, 0x98, 0x89, 0xa9,
	0x91, 0x7d, 0x58, 0x5b, 0x8d, 0x20, 0xd5, 0xc5,
	0x08, 0x40, 0x3b, 0x86, 0xaf, 0xf4, 0xd6, 0xb9,
	0x20, 0x95, 0xe8, 0x90, 0x3b, 0x8f, 0x9f, 0x36,
	0x5b, 0x46, 0xb6, 0xd4, 0x1e, 0xf5, 0x05, 0x88,
	0x80, 0x14, 0xe7, 0x2c, 0x77, 0x5d, 0x6e, 0x54,
	0xe9, 0x65, 0x81, 0x5a, 0x68, 0x92, 0xa5, 0xd6,
	0x40, 0x78, 0x11, 0x97, 0x65, 0xd7, 0x64, 0x36,
	0x5e, 0x8d, 0x2a, 0x87, 0xa8, 0xeb, 0x7d, 0x06,
	0x2c, 0x10, 0xf8, 0x0a, 0x7d, 0x01, 0x00, 0x01,
	0x10, 0x00, 0x06, 0x40, 0x99, 0x8f, 0x5a, 0x54,
	0x71, 0x23, 0xa7, 0x6a, 0x64, 0x3f, 0xbd, 0xdd,
	0x52, 0xb2, 0x79, 0x6f, 0x88, 0x26, 0x94, 0x9e,
	0xaf, 0xa4, 0xde, 0x7d, 0x8d, 0x88, 0x10, 0xc8,
	0xf6, 0x56, 0xf0, 0x8f, 0x46, 0x28, 0x48, 0x55,
	0x51, 0xc5, 0xaf, 0xa1, 0xa9, 0x9d, 0xac, 0x9f,
	0xb1, 0x26, 0x4b, 0xeb, 0x39, 0xad, 0x88, 0x46,
	0xaf, 0xbc, 0x61, 0xa8, 0x7b, 0xf9, 0x7b, 0x3e,
	0xe4, 0x95, 0xd9, 0xa8, 0x79, 0x48, 0x51, 0x00,
	0xbe, 0xa4, 0xb6, 0x96, 0x7f, 0x3d, 0xfd, 0x76,
	0xa6, 0xb7, 0xbb, 0xb9, 0x77, 0xdc, 0x54, 0xfb,
	0x52, 0x9c, 0x79, 0x8f, 0xed, 0xd4, 0xb1, 0xbc,
	0x0f, 0x7e, 0xb1, 0x7e, 0x70, 0x6d, 0xfc, 0xb9,
	0x7e, 0x66, 0x9a, 0x86, 0x23, 0x3a, 0x98, 0x5e,
	0x32, 0x8d, 0x75, 0x18, 0x54, 0x64, 0x36, 0xdd,
	0x92, 0x01, 0x39, 0x90, 0xb9, 0xe3, 0xaf, 0x6f,
	0x98, 0xa5, 0xc0, 0x80, 0xc6, 0x2f, 0xa1, 0x02,
	0xad, 0x8d, 0xf4, 0xd6, 0x66, 0x7b, 0x45, 0xe5,
	0x74, 0x18, 0xb1, 0x27, 0x24, 0x01, 0x1e, 0xea,
	0xd8, 0xf3, 0x79, 0x92, 0xe9, 0x03, 0xf5, 0x57,
	0x8d, 0x65, 0x2a, 0x8d, 0x1b, 0xf0, 0xda, 0x58,
	0x3f, 0x58, 0xa0, 0xf4, 0xb4, 0xbe, 0xcb, 0x21,
	0x66, 0xe9, 0x21, 0x7c, 0x76, 0xf3, 0xc1, 0x7e,
	0x2e, 0x7c, 0x3d, 0x61, 0x20, 0x1d, 0xc5, 0xc0,
	0x71, 0x28, 0x2e, 0xb7, 0x0f, 0x1f, 0x7a, 0xc1,
	0xd3, 0x6a, 0x1e, 0xa3, 0x54, 0x34, 0x8e, 0x0d,
	0xd7, 0x96, 0x93, 0x78, 0x50, 0xc1, 0xee, 0x27,
	0x72, 0x3a, 0xbd, 0x57, 0x22, 0xf0, 0xd7, 0x6d,
	0x9d, 0x65, 0xc4, 0x07, 0x9c, 0x82, 0xa6, 0xd4,
	0xf7, 0x6b, 0x9a, 0xe9, 0xc0, 0x6c, 0x4a, 0x4f,
	0x6f, 0xbe, 0x8e, 0x01, 0x37, 0x50, 0x3a, 0x66,
	0xd9, 0xe9, 0xd9, 0xf9, 0x06, 0x9e, 0x00, 0xa9,
	0x84, 0xa0, 0x18, 0xb3, 0x44, 0x21, 0x24, 0xa3,
	0x6c, 0xcd, 0xb7, 0x0f, 0x31, 0x2a, 0xe8, 0x15,
	0xb6, 0x93, 0x6f, 0xb9, 0x86, 0xe5, 0x28, 0x01,
	0x1a, 0x5e, 0x10, 0x3f, 0x1f, 0x4d, 0x35, 0xa2,
	0x8d, 0xb8, 0x54, 0x26, 0x68, 0x3a, 0xcd, 0xcb,
	0x5f, 0xfa, 0x37, 0x4a, 0x60, 0x10, 0xb1, 0x0a,
	0xfe, 0xba, 0x9b, 0x96, 0x5d, 0x7e, 0x99, 0xcf,
	0x01, 0x98, 0x65, 0x87, 0xad, 0x40, 0xd5, 0x82,
	0x1d, 0x61, 0x54, 0xa2, 0xd3, 0x16, 0x3e, 0xf7,
	0xe3, 0x05, 0x89, 0x8d, 0x8a, 0x50, 0x87, 0x47,
	0xbe, 0x29, 0x18, 0x01, 0xb7, 0xc3, 0xdd, 0x43,
	0x23, 0x7a, 0xcd, 0x85, 0x1d, 0x4e, 0xa9, 0xc0,
	0x1a, 0xa4, 0x77, 0xab, 0xe7, 0x31, 0x9a, 0x33,
	0x1b, 0x7a, 0x86, 0xe1, 0xe5, 0xca, 0x0c, 0x43,
	0x1a, 0xfa, 0xec, 0x4c, 0x05, 0xc6, 0xd1, 0x43,
	0x12, 0xf9, 0x4d, 0x3e, 0xf7, 0xd6, 0x05, 0x9c,
	0x1c, 0xdd, /* end of cert_rx */
	};
#endif

#define REPEATER	1
#define NO_REPEATER	0

/* Message Vector */
/* Transmitter */
#ifdef TEST_VECTOR_1
uint8_t msg_rx_send_cert[524] = {
	AKE_SEND_CERT,
	REPEATER,
	0x74, 0x5b, 0xb8, 0xbd, 0x04, 0xbc, 0x83, 0xc7,
	0x95, 0x78, 0xf9, 0x0c, 0x91, 0x4b, 0x89, 0x38,
	0x05, 0x5a, 0xa4, 0xac, 0x1f, 0xa8, 0x03, 0x93,
	0x82, 0x79, 0x75, 0xaf, 0x66, 0x22, 0xde, 0x43,
	0x80, 0x8d, 0xcd, 0x5d, 0x90, 0xb8, 0x3c, 0xb3,
	0xd8, 0x9e, 0xb0, 0x0d, 0x09, 0x44, 0xf4, 0x3f,
	0x5f, 0xab, 0xb9, 0xc4, 0xc9, 0x96, 0xef, 0x78,
	0xb5, 0x8f, 0x69, 0x77, 0xb4, 0x7d, 0x08, 0x14,
	0x9c, 0x81, 0xa0, 0x8f, 0x04, 0x1f, 0xa0, 0x88,
	0xe1, 0x20, 0xc7, 0x34, 0x4a, 0x49, 0x35, 0x65,
	0x99, 0xcf, 0x53, 0x19, 0xf0, 0xc6, 0x81, 0x76,
	0x05, 0x5c, 0xb9, 0xde, 0xdd, 0xab, 0x3d, 0xb0,
	0x92, 0xa1, 0x23, 0x4f, 0x0c, 0x71, 0x30, 0x42,
	0x78, 0xf6, 0x55, 0xae, 0xbd, 0x36, 0x25, 0x8e,
	0x25, 0x0d, 0x4e, 0x5e, 0x8e, 0x77, 0x6a, 0x60,
	0xe3, 0xc1, 0xe9, 0xee, 0xcd, 0x2b, 0x9e, 0x18,
	0x63, 0x97, 0xd4, 0xe6, 0x75, 0x01, 0x00, 0x01,
	0x00, 0x00, 0x1d, 0x0a, 0x61, 0xea, 0xab, 0xf8,
	0xa8, 0x2b, 0x02, 0x69, 0xa1, 0x34, 0xfd, 0x91,
	0xac, 0x2b, 0xf2, 0x8f, 0x34, 0x8b, 0xd4, 0x84,
	0xfa, 0x62, 0xbc, 0x01, 0x4a, 0x4a, 0xa2, 0xb2,
	0x14, 0xbf, 0xb5, 0xf4, 0xdf, 0xac, 0x80, 0x93,
	0x0d, 0x13, 0xec, 0x9c, 0xe5, 0xd8, 0x34, 0x70,
	0x51, 0x9a, 0x66, 0x80, 0xeb, 0xbe, 0xcc, 0x7e,
	0x45, 0xf0, 0xe6, 0x39, 0x63, 0x84, 0xc9, 0xb9,
	0x8e, 0x8c, 0xaf, 0x9c, 0xa9, 0xd4, 0x0e, 0xeb,
	0x9a, 0x57, 0x2a, 0x17, 0x41, 0xca, 0x97, 0xf3,
	0x19, 0x96, 0xb5, 0x5d, 0x0f, 0x30, 0xa3, 0x84,
	0xe5, 0x73, 0xa2, 0xed, 0x05, 0x69, 0x7a, 0x22,
	0xce, 0x84, 0x1f, 0x3e, 0x39, 0x9e, 0x28, 0x76,
	0xc9, 0xbc, 0x89, 0x5b, 0x70, 0xb1, 0x7b, 0xf4,
	0xed, 0xb6, 0x74, 0x12, 0xab, 0x48, 0x29, 0x64,
	0xce, 0x6c, 0x60, 0x04, 0xeb, 0xa9, 0x7a, 0xa2,
	0x15, 0xa6, 0x58, 0x9a, 0xad, 0x32, 0xc7, 0x53,
	0x39, 0xe5, 0xfe, 0xf0, 0x37, 0xa7, 0xa0, 0xc5,
	0xff, 0xec, 0xd9, 0xb0, 0x05, 0xbb, 0x25, 0x13,
	0xa0, 0xa4, 0xc7, 0x0b, 0x2a, 0x5d, 0xc6, 0x8f,
	0x51, 0x11, 0xcb, 0x36, 0xed, 0x5c, 0x17, 0x7e,
	0x22, 0x20, 0xc3, 0xeb, 0x40, 0x8c, 0x67, 0xbb,
	0x1c, 0xd2, 0x47, 0xb0, 0xe0, 0xbd, 0xe7, 0x4c,
	0xcd, 0x5d, 0xd5, 0x23, 0x12, 0xf8, 0x3b, 0x1d,
	0x91, 0x3b, 0xf3, 0xc7, 0x60, 0xea, 0x90, 0x24,
	0x48, 0xe5, 0x92, 0x21, 0x6c, 0xf6, 0xd9, 0x5e,
	0x76, 0x8d, 0x2b, 0x86, 0xa6, 0x7c, 0x16, 0xae,
	0xa8, 0x36, 0x08, 0xa0, 0x37, 0x14, 0x1a, 0xd7,
	0x03, 0xe1, 0x40, 0x31, 0xca, 0x6c, 0x95, 0xe0,
	0x10, 0xb0, 0x43, 0xcf, 0xb7, 0xe0, 0x30, 0x05,
	0xb9, 0xac, 0xb7, 0x08, 0x68, 0xcd, 0x7e, 0x11,
	0x47, 0x2a, 0x03, 0x3b, 0xeb, 0x74, 0xc8, 0x19,
	0x62, 0x8b, 0x2f, 0x11, 0x91, 0xb6, 0x06, 0x4f,
	0xe0, 0x2a, 0x44, 0x20, 0x43, 0x29, 0x13, 0x1f,
	0xdd, 0xd0, 0x4a, 0x11, 0x6c, 0x0e, 0x83, 0xbf,
	0x22, 0x62, 0x3b, 0xeb, 0xec, 0xd7, 0x76, 0x28,
	0xba, 0x64, 0x88, 0x42, 0xc8, 0x73, 0xa7, 0x9e,
	0x4a, 0x69, 0x3a, 0xb2, 0x0c, 0x4b, 0x3a, 0xd9,
	0x50, 0xdb, 0x7c, 0x51, 0xee, 0x15, 0xe0, 0x6b,
	0x2c, 0x63, 0xa6, 0x91, 0x57, 0xdd, 0xbf, 0x17,
	0x47, 0x23, 0xad, 0x15, 0xcb, 0xb9, 0x91, 0x18,
	0x0b, 0x51, 0x8f, 0xf9, 0x1c, 0x51, 0x67, 0xc1,
	0x0b, 0x78, 0xf5, 0xd9, 0x55, 0xdc, 0x48, 0xe4,
	0xc0, 0x83, 0xa5, 0xdf, 0x75, 0xe2, 0xdc, 0x88,
	0xd2, 0xc6, 0xdd, 0xdf, 0x1f, 0x37, 0x90, 0x35,
	0xf6, 0xfd, 0xda, 0xe0, 0x04, 0x32, 0x69, 0xc1,
	0xaf, 0xd9, 0xf9, 0x11, 0xc5, 0xaa, 0x74, 0x58,
	0x32, 0x1c, 0x71, 0xaa, 0xa7, 0x14, 0xfb, 0x23,
	0x17, 0x22};

uint8_t msg_rx_send_cert_v22[533] = {
	0x74, 0x5b, 0xb8, 0xbd, 0x04, 0xaf, 0xb5, 0xc5,
	0xc6, 0x7b, 0xc5, 0x3a, 0x34, 0x90, 0xa9, 0x54,
	0xc0, 0x8f, 0xb7, 0xeb, 0xa1, 0x54, 0xd2, 0x4f,
	0x22, 0xde, 0x83, 0xf5, 0x03, 0xa6, 0xc6, 0x68,
	0x46, 0x9b, 0xc0, 0xb8, 0xc8, 0x6c, 0xdb, 0x26,
	0xf9, 0x3c, 0x49, 0x2f, 0x02, 0xe1, 0x71, 0xdf,
	0x4e, 0xf3, 0x0e, 0xc8, 0xbf, 0x22, 0x9d, 0x04,
	0xcf, 0xbf, 0xa9, 0x0d, 0xff, 0x68, 0xab, 0x05,
	0x6f, 0x1f, 0x12, 0x8a, 0x68, 0x62, 0xeb, 0xfe,
	0xc9, 0xea, 0x9f, 0xa7, 0xfb, 0x8c, 0xba, 0xb1,
	0xbd, 0x65, 0xac, 0x35, 0x9c, 0xa0, 0x33, 0xb1,
	0xdd, 0xa6, 0x05, 0x36, 0xaf, 0x00, 0xa2, 0x7f,
	0xbc, 0x07, 0xb2, 0xdd, 0xb5, 0xcc, 0x57, 0x5c,
	0xdc, 0xc0, 0x95, 0x50, 0xe5, 0xff, 0x1f, 0x20,
	0xdb, 0x59, 0x46, 0xfa, 0x47, 0xc4, 0xed, 0x12,
	0x2e, 0x9e, 0x22, 0xbd, 0x95, 0xa9, 0x85, 0x59,
	0xa1, 0x59, 0x3c, 0xc7, 0x83, 0x01, 0x00, 0x01,
	0x10, 0x00, 0x0b, 0xa3, 0x73, 0x77, 0xdd, 0x03,
	0x18, 0x03, 0x8a, 0x91, 0x63, 0x29, 0x1e, 0xa2,
	0x95, 0x74, 0x42, 0x90, 0x78, 0xd0, 0x67, 0x25,
	0xb6, 0x32, 0x2f, 0xcc, 0x23, 0x2b, 0xad, 0x21,
	0x39, 0x3d, 0x14, 0xba, 0x37, 0xa3, 0x65, 0x14,
	0x6b, 0x9c, 0xcf, 0x61, 0x20, 0x44, 0xa1, 0x07,
	0xbb, 0xcf, 0xc3, 0x4e, 0x95, 0x5b, 0x10, 0xcf,
	0xc7, 0x6f, 0xf1, 0xc3, 0x53, 0x7c, 0x63, 0xa1,
	0x8c, 0xb2, 0xe8, 0xab, 0x2e, 0x96, 0x97, 0xc3,
	0x83, 0x99, 0x70, 0xd3, 0xdc, 0x21, 0x41, 0xf6,
	0x0a, 0xd1, 0x1a, 0xee, 0xf4, 0xcc, 0xeb, 0xfb,
	0xa6, 0xaa, 0xb6, 0x9a, 0xaf, 0x1d, 0x16, 0x5e,
	0xe2, 0x83, 0xa0, 0x4a, 0x41, 0xf6, 0x7b, 0x07,
	0xbf, 0x47, 0x85, 0x28, 0x6c, 0xa0, 0x77, 0xa6,
	0xa3, 0xd7, 0x85, 0xa5, 0xc4, 0xa7, 0xe7, 0x6e,
	0xb5, 0x1f, 0x40, 0x72, 0x97, 0xfe, 0xc4, 0x81,
	0x23, 0xa0, 0xc2, 0x90, 0xb3, 0x49, 0x24, 0xf5,
	0xb7, 0x90, 0x2c, 0xbf, 0xfe, 0x04, 0x2e, 0x00,
	0xa9, 0x5f, 0x86, 0x04, 0xca, 0xc5, 0x3a, 0xcc,
	0x26, 0xd9, 0x39, 0x7e, 0xa9, 0x2d, 0x28, 0x6d,
	0xc0, 0xcc, 0x6e, 0x81, 0x9f, 0xb9, 0xb7, 0x11,
	0x33, 0x32, 0x23, 0x47, 0x98, 0x43, 0x0d, 0xa5,
	0x1c, 0x59, 0xf3, 0xcd, 0xd2, 0x4a, 0xb7, 0x3e,
	0x69, 0xd9, 0x21, 0x53, 0x9a, 0xf2, 0x6e, 0x77,
	0x62, 0xae, 0x50, 0xda, 0x85, 0xc6, 0xaa, 0xc4,
	0xb5, 0x1c, 0xcd, 0xa8, 0xa5, 0xdd, 0x6e, 0x62,
	0x73, 0xff, 0x5f, 0x7b, 0xd7, 0x3c, 0x17, 0xba,
	0x47, 0x0c, 0x89, 0x0e, 0x62, 0x79, 0x43, 0x94,
	0xaa, 0xa8, 0x47, 0xf4, 0x4c, 0x38, 0x89, 0xa8,
	0x81, 0xad, 0x23, 0x13, 0x27, 0x0c, 0x17, 0xcf,
	0x3d, 0x83, 0x84, 0x57, 0x36, 0xe7, 0x22, 0x26,
	0x2e, 0x76, 0xfd, 0x56, 0x80, 0x83, 0xf6, 0x70,
	0xd4, 0x5c, 0x91, 0x48, 0x84, 0x7b, 0x18, 0xdb,
	0x0e, 0x15, 0x3b, 0x49, 0x26, 0x23, 0xe6, 0xa3,
	0xe2, 0xc6, 0x3a, 0x23, 0x57, 0x66, 0xb0, 0x72,
	0xb8, 0x12, 0x17, 0x4f, 0x86, 0xfe, 0x48, 0x0d,
	0x53, 0xea, 0xfe, 0x31, 0x48, 0x7d, 0x86, 0xde,
	0xeb, 0x82, 0x86, 0x1e, 0x62, 0x03, 0x98, 0x59,
	0x00, 0x37, 0xeb, 0x61, 0xe9, 0xf9, 0x7a, 0x40,
	0x78, 0x1c, 0xba, 0xbc, 0x0b, 0x88, 0xfb, 0xfd,
	0x9d, 0xd5, 0x01, 0x11, 0x94, 0xe0, 0x35, 0xbe,
	0x33, 0xe8, 0xe5, 0x36, 0xfb, 0x9c, 0x45, 0xcb,
	0x75, 0xaf, 0xd6, 0x35, 0xff, 0x78, 0x92, 0x7f,
	0xa1, 0x7c, 0xa8, 0xfc, 0xb7, 0xf7, 0xa8, 0x52,
	0xa9, 0xc6, 0x84, 0x72, 0x3d, 0x1c, 0xc9, 0xdf,
	0x35, 0xc6, 0xe6, 0x00, 0xe1, 0x48, 0x72, 0xce,
	0x83, 0x1b, 0xcc, 0xf8, 0x33, 0x2d, 0x4f, 0x98,
	0x75, 0x00, 0x3c, 0x41, 0xdf, 0x7a, 0xed, 0x38,
	0x53, 0xb1, /* end of Cert Rx */
	0x3b, 0xa0, 0xbe, 0xde, 0x0c, 0x46, 0xa9, 0x91, /* rrx */
	0x02, 0x00, 0x03 /* RxCaps */
	};

/* Receiver Publickey Certificate */
#else
uint8_t msg_rx_send_cert[524] = {
	AKE_SEND_CERT,
	NO_REPEATER,
	/* Receiver Publickey Certificate */
	0x8b, 0xa4, 0x47, 0x42, 0xfb, 0xc9, 0x1b, 0x82,
	0xe2, 0x76, 0x7f, 0x90, 0x4f, 0xe9, 0x12, 0x33,
	0x7c, 0x21, 0x1f, 0x7b, 0x25, 0xda, 0x76, 0xde,
	0xae, 0x59, 0x70, 0xf7, 0xc2, 0xe7, 0xe0, 0x4a,
	0xcf, 0xbd, 0x5b, 0xba, 0x1c, 0x36, 0x4e, 0xe3,
	0x78, 0x4c, 0x92, 0x6a, 0x3c, 0xd8, 0xc1, 0xe9,
	0x51, 0xa9, 0x35, 0xeb, 0xd8, 0xe8, 0xd5, 0x3e,
	0x3b, 0x1d, 0x00, 0xc1, 0x16, 0x16, 0xd0, 0x58,
	0xeb, 0x2a, 0x4b, 0xa0, 0x76, 0x9c, 0xd0, 0xe4,
	0xb2, 0x23, 0xdc, 0xaa, 0x37, 0x07, 0xe5, 0x85,
	0x1a, 0xaa, 0x13, 0x55, 0x01, 0x4e, 0xed, 0x88,
	0xca, 0x3f, 0xfb, 0xc5, 0x58, 0x46, 0x91, 0xec,
	0x35, 0x99, 0x08, 0x1c, 0xa1, 0x22, 0x64, 0xe8,
	0x3c, 0x2e, 0x70, 0xdf, 0xa9, 0x10, 0x14, 0x81,
	0x46, 0xa2, 0x38, 0x08, 0xef, 0x1b, 0xd2, 0x46,
	0xee, 0x38, 0x0d, 0x6d, 0x92, 0xd3, 0xf2, 0x02,
	0xe7, 0xe4, 0x29, 0xad, 0x0d, 0x01, 0x00, 0x01,
	0x00, 0x00, 0x91, 0x18, 0x81, 0xa5, 0xcd, 0xab,
	0x78, 0x50, 0xad, 0x1d, 0x3b, 0x77, 0xbe, 0x51,
	0x32, 0x9f, 0x04, 0xe6, 0x3e, 0xf7, 0x01, 0x39,
	0xf2, 0x59, 0x98, 0x75, 0x9d, 0x29, 0x12, 0x33,
	0x39, 0xb4, 0x80, 0x91, 0x9d, 0x6a, 0xff, 0x0d,
	0x5c, 0x59, 0x22, 0x43, 0x77, 0xfc, 0xed, 0xc2,
	0x40, 0x9d, 0xe2, 0xd1, 0x4b, 0xff, 0x02, 0x78,
	0x36, 0xd3, 0xad, 0xcb, 0xa6, 0xd3, 0xd3, 0x9d,
	0xcc, 0xff, 0xcb, 0x3c, 0xa3, 0xcb, 0xfd, 0xdf,
	0xcf, 0xe2, 0x85, 0xa8, 0xbd, 0xa2, 0xf6, 0x60,
	0x06, 0xb2, 0x9b, 0x53, 0xc4, 0xd6, 0x22, 0xbd,
	0x65, 0x3c, 0x6f, 0x40, 0x01, 0x7c, 0x2c, 0x78,
	0x89, 0x31, 0x70, 0x47, 0x56, 0x88, 0xf5, 0x56,
	0x33, 0xf2, 0x0a, 0x91, 0x27, 0xb1, 0x68, 0x5f,
	0x84, 0x98, 0x1d, 0x37, 0xbd, 0x69, 0x11, 0x6d,
	0x60, 0xca, 0x01, 0x44, 0xbe, 0xfa, 0x92, 0x1f,
	0xec, 0x15, 0xbe, 0x37, 0x68, 0xd1, 0xdc, 0xcc,
	0x66, 0x7c, 0xc4, 0x8b, 0x78, 0x51, 0xd9, 0x81,
	0xdf, 0xaa, 0xe2, 0x70, 0x2f, 0x02, 0x59, 0x10,
	0x64, 0xb2, 0x93, 0x6d, 0x09, 0x23, 0xa9, 0x7d,
	0x0a, 0xdb, 0x8a, 0x34, 0x53, 0xca, 0xe2, 0x6a,
	0x6d, 0x39, 0xfb, 0x25, 0x5e, 0x38, 0x86, 0xeb,
	0x4d, 0xa1, 0xc1, 0xea, 0xbd, 0xac, 0x1d, 0x14,
	0x46, 0xac, 0x58, 0x86, 0x55, 0xec, 0x40, 0x9f,
	0xdc, 0x4f, 0x80, 0xf2, 0x68, 0x0c, 0x81, 0xa3,
	0xdf, 0x01, 0xa0, 0x62, 0x44, 0x9e, 0x20, 0x42,
	0x89, 0x88, 0x24, 0xb2, 0x6a, 0x40, 0x11, 0x4b,
	0x96, 0x33, 0xba, 0x0d, 0xae, 0x49, 0x98, 0x4b,
	0x24, 0x16, 0x5f, 0xff, 0x85, 0x86, 0x4a, 0x09,
	0xcd, 0xce, 0x30, 0xf2, 0xfa, 0xff, 0x74, 0x28,
	0x40, 0x97, 0xa5, 0x56, 0x29, 0x74, 0x53, 0xa2,
	0x34, 0xe4, 0xee, 0xe0, 0x45, 0xb6, 0xd8, 0xa7,
	0x9b, 0xa0, 0x1a, 0x00, 0x2d, 0xff, 0x8d, 0x2f,
	0xed, 0x70, 0x15, 0xc5, 0xe0, 0x11, 0xbb, 0xc8,
	0xef, 0x5b, 0x2c, 0xb3, 0x12, 0x0f, 0xbe, 0x88,
	0x7c, 0x98, 0x44, 0x3c, 0x65, 0x45, 0xbc, 0x20,
	0xac, 0x07, 0xe2, 0x4c, 0x74, 0x2a, 0xb4, 0xb1,
	0x0e, 0x47, 0x2a, 0xd6, 0x20, 0x19, 0xce, 0x75,
	0x18, 0x45, 0x28, 0x90, 0x4f, 0x84, 0x42, 0x81,
	0x37, 0xed, 0x1d, 0x0b, 0x48, 0xf7, 0x53, 0xe3,
	0x92, 0xf2, 0xeb, 0xdf, 0x7a, 0x91, 0xdf, 0xe8,
	0xdb, 0xb1, 0xc4, 0xfd, 0xfd, 0xc1, 0xad, 0x4e,
	0xcc, 0xbe, 0x11, 0xe2, 0x76, 0x9b, 0x78, 0x2b,
	0xb8, 0xf4, 0x0e, 0x9d, 0x05, 0xd6, 0x08, 0xd0,
	0x76, 0x2c, 0xe8, 0x4d, 0xee, 0x3d, 0x31, 0xda,
	0xc4, 0xf7, 0x01, 0x12, 0x8f, 0x5d, 0x94, 0xe6,
	0xcb, 0x15, 0xfe, 0x53, 0x42, 0xb2, 0x51, 0x8c,
	0x5d, 0xc7, 0x64, 0xde, 0x14, 0x8f, 0xaf, 0xc1,
	0xaf, 0x36};

uint8_t msg_rx_send_cert_v22[533] = {
	0x8b, 0xa4, 0x47, 0x42, 0xfb, 0xe4, 0x68, 0x63,
	0x8a, 0xda, 0x97, 0x2d, 0xde, 0x9a, 0x8d, 0x1c,
	0xb1, 0x65, 0x4b, 0x85, 0x8d, 0xe5, 0x46, 0xd6,
	0xdb, 0x95, 0xa5, 0xf6, 0x66, 0x74, 0xea, 0x81,
	0x0b, 0x9a, 0x58, 0x58, 0x66, 0x26, 0x86, 0xa6,
	0xb4, 0x56, 0x2b, 0x29, 0x43, 0xe5, 0xbb, 0x81,
	0x74, 0x86, 0xa7, 0xb7, 0x16, 0x2f, 0x07, 0xec,
	0xd1, 0xb5, 0xf9, 0xae, 0x4f, 0x98, 0x89, 0xa9,
	0x91, 0x7d, 0x58, 0x5b, 0x8d, 0x20, 0xd5, 0xc5,
	0x08, 0x40, 0x3b, 0x86, 0xaf, 0xf4, 0xd6, 0xb9,
	0x20, 0x95, 0xe8, 0x90, 0x3b, 0x8f, 0x9f, 0x36,
	0x5b, 0x46, 0xb6, 0xd4, 0x1e, 0xf5, 0x05, 0x88,
	0x80, 0x14, 0xe7, 0x2c, 0x77, 0x5d, 0x6e, 0x54,
	0xe9, 0x65, 0x81, 0x5a, 0x68, 0x92, 0xa5, 0xd6,
	0x40, 0x78, 0x11, 0x97, 0x65, 0xd7, 0x64, 0x36,
	0x5e, 0x8d, 0x2a, 0x87, 0xa8, 0xeb, 0x7d, 0x06,
	0x2c, 0x10, 0xf8, 0x0a, 0x7d, 0x01, 0x00, 0x01,
	0x10, 0x00, 0x06, 0x40, 0x99, 0x8f, 0x5a, 0x54,
	0x71, 0x23, 0xa7, 0x6a, 0x64, 0x3f, 0xbd, 0xdd,
	0x52, 0xb2, 0x79, 0x6f, 0x88, 0x26, 0x94, 0x9e,
	0xaf, 0xa4, 0xde, 0x7d, 0x8d, 0x88, 0x10, 0xc8,
	0xf6, 0x56, 0xf0, 0x8f, 0x46, 0x28, 0x48, 0x55,
	0x51, 0xc5, 0xaf, 0xa1, 0xa9, 0x9d, 0xac, 0x9f,
	0xb1, 0x26, 0x4b, 0xeb, 0x39, 0xad, 0x88, 0x46,
	0xaf, 0xbc, 0x61, 0xa8, 0x7b, 0xf9, 0x7b, 0x3e,
	0xe4, 0x95, 0xd9, 0xa8, 0x79, 0x48, 0x51, 0x00,
	0xbe, 0xa4, 0xb6, 0x96, 0x7f, 0x3d, 0xfd, 0x76,
	0xa6, 0xb7, 0xbb, 0xb9, 0x77, 0xdc, 0x54, 0xfb,
	0x52, 0x9c, 0x79, 0x8f, 0xed, 0xd4, 0xb1, 0xbc,
	0x0f, 0x7e, 0xb1, 0x7e, 0x70, 0x6d, 0xfc, 0xb9,
	0x7e, 0x66, 0x9a, 0x86, 0x23, 0x3a, 0x98, 0x5e,
	0x32, 0x8d, 0x75, 0x18, 0x54, 0x64, 0x36, 0xdd,
	0x92, 0x01, 0x39, 0x90, 0xb9, 0xe3, 0xaf, 0x6f,
	0x98, 0xa5, 0xc0, 0x80, 0xc6, 0x2f, 0xa1, 0x02,
	0xad, 0x8d, 0xf4, 0xd6, 0x66, 0x7b, 0x45, 0xe5,
	0x74, 0x18, 0xb1, 0x27, 0x24, 0x01, 0x1e, 0xea,
	0xd8, 0xf3, 0x79, 0x92, 0xe9, 0x03, 0xf5, 0x57,
	0x8d, 0x65, 0x2a, 0x8d, 0x1b, 0xf0, 0xda, 0x58,
	0x3f, 0x58, 0xa0, 0xf4, 0xb4, 0xbe, 0xcb, 0x21,
	0x66, 0xe9, 0x21, 0x7c, 0x76, 0xf3, 0xc1, 0x7e,
	0x2e, 0x7c, 0x3d, 0x61, 0x20, 0x1d, 0xc5, 0xc0,
	0x71, 0x28, 0x2e, 0xb7, 0x0f, 0x1f, 0x7a, 0xc1,
	0xd3, 0x6a, 0x1e, 0xa3, 0x54, 0x34, 0x8e, 0x0d,
	0xd7, 0x96, 0x93, 0x78, 0x50, 0xc1, 0xee, 0x27,
	0x72, 0x3a, 0xbd, 0x57, 0x22, 0xf0, 0xd7, 0x6d,
	0x9d, 0x65, 0xc4, 0x07, 0x9c, 0x82, 0xa6, 0xd4,
	0xf7, 0x6b, 0x9a, 0xe9, 0xc0, 0x6c, 0x4a, 0x4f,
	0x6f, 0xbe, 0x8e, 0x01, 0x37, 0x50, 0x3a, 0x66,
	0xd9, 0xe9, 0xd9, 0xf9, 0x06, 0x9e, 0x00, 0xa9,
	0x84, 0xa0, 0x18, 0xb3, 0x44, 0x21, 0x24, 0xa3,
	0x6c, 0xcd, 0xb7, 0x0f, 0x31, 0x2a, 0xe8, 0x15,
	0xb6, 0x93, 0x6f, 0xb9, 0x86, 0xe5, 0x28, 0x01,
	0x1a, 0x5e, 0x10, 0x3f, 0x1f, 0x4d, 0x35, 0xa2,
	0x8d, 0xb8, 0x54, 0x26, 0x68, 0x3a, 0xcd, 0xcb,
	0x5f, 0xfa, 0x37, 0x4a, 0x60, 0x10, 0xb1, 0x0a,
	0xfe, 0xba, 0x9b, 0x96, 0x5d, 0x7e, 0x99, 0xcf,
	0x01, 0x98, 0x65, 0x87, 0xad, 0x40, 0xd5, 0x82,
	0x1d, 0x61, 0x54, 0xa2, 0xd3, 0x16, 0x3e, 0xf7,
	0xe3, 0x05, 0x89, 0x8d, 0x8a, 0x50, 0x87, 0x47,
	0xbe, 0x29, 0x18, 0x01, 0xb7, 0xc3, 0xdd, 0x43,
	0x23, 0x7a, 0xcd, 0x85, 0x1d, 0x4e, 0xa9, 0xc0,
	0x1a, 0xa4, 0x77, 0xab, 0xe7, 0x31, 0x9a, 0x33,
	0x1b, 0x7a, 0x86, 0xe1, 0xe5, 0xca, 0x0c, 0x43,
	0x1a, 0xfa, 0xec, 0x4c, 0x05, 0xc6, 0xd1, 0x43,
	0x12, 0xf9, 0x4d, 0x3e, 0xf7, 0xd6, 0x05, 0x9c,
	0x1c, 0xdd, /* end of cert_rx */

	0xe1, 0x7a, 0xb0, 0xfd, 0x0f, 0x54, 0x40, 0x52, /* rrx */
	0x02, 0x00, 0x02 /* RxCaps */
};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_receiver_info[6] = {
	AKE_RECEIVER_INFO,
	0x00, 0x06,
	0x01,
	0x00,
	LC_PRECOMPUTE_SUPPORT
};
#else
uint8_t msg_rx_receiver_info[6] = {
	AKE_RECEIVER_INFO,
	0x00, 0x06,
	0x01,
	0x00,
	LC_PRECOMPUTE_SUPPORT
		/* LC_PRECOMPUTE_NOT_SUPPORT */
};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_send_rrx[9] = {
	AKE_SEND_RRX,
	0x3b, 0xa0, 0xbe, 0xde, 0x0c, 0x46, 0xa9, 0x91};
#else
uint8_t msg_rx_send_rrx[9] = {
	AKE_SEND_RRX,
	0xe1, 0x7a, 0xb0, 0xfd, 0x0f, 0x54, 0x40, 0x52};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_send_h_prime[33] = {
	AKE_SEND_H_PRIME,
	0xc3, 0xc0, 0x39, 0x2d, 0xc8, 0x66, 0xa2, 0xc3,
	0x98, 0x07, 0xb4, 0xbc, 0x3c, 0xbb, 0x7a, 0xd0,
	0xe6, 0x1f, 0x49, 0xd5, 0xe7, 0x04, 0x7e, 0x9a,
	0xea, 0x8c, 0xac, 0xf9, 0xd7, 0xc8, 0xcd, 0x89};

uint8_t msg_rx_send_h_prime_v22[32] = {
	0x2e, 0xf5, 0xed, 0xf8, 0x7f, 0xd8, 0xa3, 0xd0,
	0xf4, 0xa9, 0xd8, 0xac, 0x3a, 0xd0, 0xb4, 0x56,
	0x2e, 0x32, 0x19, 0x11, 0x41, 0x16, 0xf1, 0xef,
	0x0f, 0x02, 0x3d, 0x3a, 0x78, 0xe2, 0x2a, 0xc6};
#else
uint8_t msg_rx_send_h_prime[33] = {
	AKE_SEND_H_PRIME,
	0xee, 0x6f, 0x40, 0x74, 0xeb, 0x1b, 0xd0, 0x7b,
	0x35, 0x15, 0xb0, 0xf8, 0x28, 0x6a, 0xb5, 0x66,
	0x96, 0xe9, 0x39, 0x2b, 0xd7, 0x62, 0xbe, 0xd4,
	0x6a, 0x92, 0xd8, 0xd0, 0xa4, 0x18, 0x4d, 0x42};

uint8_t msg_rx_send_h_prime_v22[32] = {
	0x82, 0xb8, 0x1a, 0xca, 0xed, 0xfc, 0x87, 0x72,
	0x7d, 0x17, 0x23, 0x53, 0xcb, 0x81, 0x83, 0xbf,
	0xdb, 0xba, 0xfb, 0x90, 0xb2, 0x4e, 0x96, 0xfe,
	0xba, 0x6d, 0xad, 0x67, 0xaa, 0x2b, 0x2a, 0x56};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_send_pairing_info[17] = {
	AKE_SEND_PAIRING_INFO,
	0xce, 0x82, 0xf8, 0x36, 0x56, 0xcb, 0xbb, 0xaf,
	0x40, 0xba, 0x83, 0x17, 0x8c, 0xd3, 0xa4, 0xa6};

uint8_t msg_rx_send_pairing_info_v22[16] = {
	0xb8, 0x9f, 0xf9, 0x72, 0x6a, 0x6f, 0x2c, 0x1e,
	0x29, 0xb6, 0x44, 0x8d, 0xdc, 0xa3, 0x10, 0xbd};
#else
uint8_t msg_rx_send_pairing_info[17] = {
	AKE_SEND_PAIRING_INFO,
	0x2e, 0xec, 0xe5, 0x58, 0xe7, 0x8f, 0x1a, 0x96,
	0xd3, 0xbd, 0x40, 0x14, 0xa6, 0x7e, 0x29, 0x3a};

uint8_t msg_rx_send_pairing_info_v22[16] = {
	0xe6, 0x57, 0x8e, 0xbc, 0xc7, 0x68, 0x44, 0x87,
	0x88, 0x8a, 0x9b, 0xd7, 0xd6, 0xae, 0x38, 0xbe};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_lc_send_l_prime[33] = {
	LC_SEND_L_PRIME,
	0x1b, 0x57, 0x26, 0xde, 0xb5, 0x65, 0x1c, 0x77,
	0x31, 0x70, 0xd0, 0x09, 0x4a, 0x14, 0xeb, 0x0d,
	0x1f, 0x1c, 0xab, 0xa9, 0xfe, 0x84, 0xfd, 0xd4,
	0xeb, 0x17, 0x52, 0xe3, 0xe8, 0xd0, 0xd6, 0x36};

uint8_t msg_rx_lc_send_l_prime_v22[32] = {
	0xbc, 0x20, 0x92, 0x33, 0x54, 0x91, 0xc1, 0x9e,
	0xa4, 0xde, 0x8b, 0x30, 0x49, 0xc2, 0x06, 0x6a,
	0xd8, 0x11, 0xa2, 0x2a, 0xb1, 0x46, 0xdf, 0x74,
	0x58, 0x47, 0x05, 0xa8, 0xb7, 0x67, 0xfb, 0xdd};
#else
uint8_t msg_rx_lc_send_l_prime[33] = {
	LC_SEND_L_PRIME,
	0x19, 0x16, 0xb1, 0x59, 0x73, 0xbe, 0xe3, 0x67,
	0xf0, 0x56, 0x50, 0x51, 0x44, 0x0f, 0x53, 0xa2,
	0xdf, 0x53, 0x8d, 0xce, 0xe2, 0x58, 0x1f, 0x65,
	0xf3, 0xbf, 0x03, 0x0e, 0x68, 0x14, 0xe0, 0xe4};

uint8_t msg_rx_lc_send_l_prime_v22[32] = {
	0xf2, 0x0f, 0x13, 0x6e, 0x85, 0x53, 0xc1, 0x0c,
	0xd3, 0xdd, 0xb2, 0xf9, 0x6d, 0x33, 0x31, 0xf9,
	0xcb, 0x6e, 0x97, 0x8c, 0xcd, 0x5e, 0xda, 0x13,
	0xdd, 0xea, 0x41, 0x44, 0x10, 0x9b, 0x51, 0xb0};
#endif

#ifdef TEST_VECTOR_1
uint8_t msg_rx_rtt_ready[1] = {RTT_READY};
#else
uint8_t msg_rx_rtt_ready[1] = {RTT_READY};
#endif

#ifdef TEST_VECTOR_1
/* should enter the test vector of master key in trustlet */
uint8_t tv_emkey[128] = {
	0x75, 0xd1, 0x07, 0xf6, 0x9b, 0x7f, 0x1e, 0xbd,
	0x84, 0x2a, 0x33, 0xe2, 0x89, 0x03, 0x75, 0xb1,
	0x27, 0x3c, 0xc2, 0xf1, 0xda, 0xf8, 0x76, 0x94,
	0x9b, 0xe0, 0x5e, 0x35, 0xa4, 0xb3, 0x32, 0xa0,
	0xb5, 0xea, 0x75, 0xef, 0x6f, 0x3a, 0xd8, 0x31,
	0x3a, 0xdd, 0xc5, 0x9b, 0xde, 0xa3, 0xbb, 0x00,
	0x39, 0x29, 0x48, 0x93, 0x76, 0x2a, 0xe9, 0xe1,
	0xb5, 0x17, 0x0c, 0x64, 0x6b, 0xd4, 0x12, 0x8f,
	0x9b, 0xe1, 0x07, 0xb5, 0xa7, 0x9e, 0xd6, 0xfd,
	0x6e, 0x28, 0xc8, 0x5b, 0xd0, 0xc4, 0x01, 0xe7,
	0x69, 0xf4, 0x70, 0xab, 0xb8, 0x91, 0x2a, 0x31,
	0x4b, 0x86, 0xfd, 0x96, 0x80, 0x20, 0x19, 0x7b,
	0x73, 0xad, 0x7e, 0x78, 0xae, 0xe1, 0x71, 0x07,
	0x07, 0x50, 0x2d, 0x3f, 0x43, 0xff, 0xd4, 0x50,
	0x4e, 0xd7, 0x70, 0xfe, 0xcf, 0xf2, 0x25, 0x82,
	0xba, 0x43, 0x9e, 0x61, 0xd6, 0xf5, 0x02, 0x84};

uint8_t tv_rrx[8] = {
	0x3b, 0xa0, 0xbe, 0xde, 0x0c, 0x46, 0xa9, 0x91};

uint8_t tv_hmac_rrx[32] = {
	0xc3, 0xc0, 0x39, 0x2d, 0xc8, 0x66, 0xa2, 0xc3,
	0x98, 0x07, 0xb4, 0xbc, 0x3c, 0xbb, 0x7a, 0xd0,
	0xe6, 0x1f, 0x49, 0xd5, 0xe7, 0x04, 0x7e, 0x9a,
	0xea, 0x8c, 0xac, 0xf9, 0xd7, 0xc8, 0xcd, 0x89};

uint8_t tv_pairing_ekh[16] = {
	0xce, 0x82, 0xf8, 0x36, 0x56, 0xcb, 0xbb, 0xaf,
	0x40, 0xba, 0x83, 0x17, 0x8c, 0xd3, 0xa4, 0xa6};

/* todo: need to check */
uint8_t tv_pairing_m[16] = {
	0x18, 0xfa, 0xe4, 0x20, 0x6a, 0xfb, 0x51, 0x49,
	0x3b, 0xa0, 0xbe, 0xde, 0x0c, 0x46, 0xa9, 0x91};

uint8_t tv_lc_hmac[32] = {
	0x1b, 0x57, 0x26, 0xde, 0xb5, 0x65, 0x1c, 0x77,
	0x31, 0x70, 0xd0, 0x09, 0x4a, 0x14, 0xeb, 0x0d,
	0x1f, 0x1c, 0xab, 0xa9, 0xfe, 0x84, 0xfd, 0xd4,
	0xeb, 0x17, 0x52, 0xe3, 0xe8, 0xd0, 0xd6, 0x36};

uint8_t tv_lc_lsb16_hmac[32] = {
	0x1f, 0x1c, 0xab, 0xa9, 0xfe, 0x84, 0xfd, 0xd4,
	0xeb, 0x17, 0x52, 0xe3, 0xe8, 0xd0, 0xd6, 0x36};

uint8_t tv_eskey[16] = {
	0xcb, 0x92, 0xf6, 0x2a, 0x0a, 0x24, 0x29, 0x4f,
	0x7e, 0x5f, 0x6a, 0x69, 0xc7, 0xa2, 0xeb, 0x05};

uint8_t tv_plain[32] = {
	0x00, 0x00, 0x01, 0x00, 0x01, 0x1b, 0x3c, 0x5b,
	0xb8, 0x00, 0x00, 0x00, 0x01, 0xb5, 0x85, 0x44,
	0x3b, 0x98, 0x00, 0x00, 0x00, 0x00, 0x01, 0xb2,
	0x44, 0x54, 0x47, 0x31, 0x41, 0xfe, 0x00, 0x00};

uint8_t tv_cipher[32] = {
	0x21, 0x8b, 0x92, 0xa3, 0x28, 0xc9, 0x84, 0x36,
	0x17, 0x46, 0x4e, 0xd8, 0x68, 0x7a, 0x67, 0xb0,
	0xeb, 0x66, 0x72, 0x30, 0x24, 0x5b, 0x70, 0x2a,
	0x25, 0x86, 0xab, 0x4a, 0x7a, 0x9a, 0x3a, 0x4f};

uint8_t tv_emkey_v22[128] = {
	0x9b, 0x9f, 0x80, 0x19, 0xad, 0x0e, 0xa2, 0xf0,
	0xdd, 0xa0, 0x29, 0x33, 0xd9, 0x6d, 0x1c, 0x77,
	0x31, 0x37, 0x57, 0xe0, 0xe5, 0xb2, 0xbd, 0xdd,
	0x36, 0x3e, 0x38, 0x4e, 0x7d, 0x40, 0x78, 0x66,
	0x97, 0x7a, 0x4c, 0xce, 0xc5, 0xc7, 0x5d, 0x01,
	0x57, 0x26, 0xcc, 0xa2, 0xf6, 0xde, 0x34, 0xdd,
	0x29, 0xbe, 0x5e, 0x31, 0xe8, 0xf1, 0x34, 0xe8,
	0x1a, 0x63, 0xa3, 0x6d, 0x46, 0xdc, 0x0a, 0x06,
	0x08, 0x99, 0x9d, 0xdb, 0x3c, 0xa2, 0x9c, 0x04,
	0xdd, 0x4e, 0xd9, 0x02, 0x7d, 0x20, 0x54, 0xec,
	0xca, 0x86, 0x42, 0x1b, 0x18, 0xda, 0x30, 0x9c,
	0xc4, 0xcb, 0xac, 0xb4, 0x54, 0xde, 0x84, 0x68,
	0x71, 0x53, 0x6d, 0x92, 0x17, 0xca, 0x08, 0x8a,
	0x7a, 0xf9, 0x98, 0x9a, 0xb6, 0x7b, 0x22, 0x92,
	0xac, 0x7d, 0x0d, 0x6b, 0xd6, 0x7f, 0x31, 0xab,
	0xf0, 0x10, 0xc5, 0x2a, 0x0f, 0x6d, 0x27, 0xa0};

uint8_t tv_pairing_ekh_v22[16] = {
	0xb8, 0x9f, 0xf9, 0x72, 0x6a, 0x6f, 0x2c, 0x1e,
	0x29, 0xb6, 0x44, 0x8d, 0xdc, 0xa3, 0x10, 0xbd};

uint8_t tv_pairing_m_v22[16] = {
	0x18, 0xfa, 0xe4, 0x20, 0x6a, 0xfb, 0x51, 0x49,
	0x3b, 0xa0, 0xbe, 0xde, 0x0c, 0x46, 0xa9, 0x91};

uint8_t tv_ske_eskey_v22[16] = {
	0x4c, 0x32, 0x47, 0x12, 0xc4, 0xbe, 0xc6, 0x69,
	0x0a, 0xc2, 0x19, 0x64, 0xde, 0x91, 0xf1, 0x83};

uint8_t tv_rcvid_list_v22[36] = {
	0x02, 0x31, /* RxInfo */
	0x00, 0x00, 0x00, /* seq_num_V */
	0xbc, 0xcc, 0x7d, 0x16, 0xe6, 0xbc, 0xb9, 0x02, /* V' */
	0x60, 0x08, 0x1d, 0xf7, 0x4a, 0xb4, 0x5c, 0x8a,
	0x47, 0x8e, 0x71, 0xe2, 0x0f, 0x35, 0x79, 0x6a, /* Receiver id */
	0x17, 0x0e, 0x74, 0xe8, 0x53, 0x97, 0xa2};

uint8_t tv_rpauth_v_v22[16] = {
	0x63, 0x6d, 0xc5, 0x08, 0x4d, 0x6c, 0xb1, 0x0e,
	0x93, 0xa5, 0x28, 0x67, 0x0f, 0x34, 0x1f, 0x88};

uint8_t tv_rpauth_stream_manage_v22[7] = {
	0x00, 0x00, 0x00, /* seq_num_M */
	0x00, 0x01, /* k */
	0x00, 0x01};

uint8_t tv_rpauth_stream_ready_v22[32] = {
	0xdd, 0x26, 0xe9, 0x52, 0x6e, 0x0e, 0x1d, 0x69,
	0xc8, 0x84, 0xe4, 0xcc, 0xc8, 0x09, 0xaa, 0xc7,
	0x71, 0xe9, 0x97, 0xb5, 0x61, 0x89, 0x09, 0x6e,
	0x4d, 0x94, 0x24, 0xc2, 0x1b, 0x64, 0x58, 0xc6};
#else
uint8_t tv_emkey[128] = {
	0x78, 0x73, 0x6b, 0x24, 0xd6, 0x26, 0xfd, 0x11,
	0x36, 0xb5, 0x55, 0x5a, 0xa8, 0xbe, 0x46, 0x9e,
	0x69, 0xa1, 0xef, 0x19, 0xde, 0xd2, 0x43, 0x33,
	0x7b, 0xe7, 0xe8, 0x88, 0xe2, 0x8e, 0xd1, 0x6f,
	0x95, 0xb3, 0x56, 0xb7, 0xa0, 0xac, 0x62, 0x26,
	0x57, 0x03, 0x69, 0x03,	0xf9, 0x5c, 0x8b, 0x1d,
	0x6a, 0xd5, 0xab, 0xf9, 0x8f, 0x7a, 0x71, 0x51,
	0xd6, 0x73, 0x22, 0x9a, 0xcd, 0x51, 0x7a, 0x72,
	0x29, 0x3f, 0xd3, 0xfe, 0xfb, 0xbf, 0xf0, 0x74,
	0x89, 0x09, 0xcb, 0xc9, 0xcd, 0x57, 0xbb, 0x4a,
	0x83, 0x94, 0x01, 0xf1, 0x9e, 0x1f, 0x97, 0xe1,
	0x50, 0x84, 0x5c, 0xd8, 0xb5, 0xb0, 0xe1, 0xab,
	0xf1, 0x15, 0x19, 0x63, 0x29, 0x4f, 0x37, 0x3b,
	0xa1, 0xec, 0x14, 0x40, 0xbf, 0xdb, 0x33, 0xbb,
	0x46, 0xda, 0xf8, 0x3c, 0xa4, 0x73, 0x7e, 0xba,
	0x97, 0x2a, 0x18, 0x57, 0x6b, 0xd6, 0xf8, 0x58};

uint8_t tv_rrx[8] = {
	0xe1, 0x7a, 0xb0, 0xfd, 0x0f, 0x54, 0x40, 0x52};

uint8_t tv_hmac_rrx[32] = {
	0xee, 0x6f, 0x40, 0x74, 0xeb, 0x1b, 0xd0, 0x7b,
	0x35, 0x15, 0xb0, 0xf8, 0x28, 0x6a, 0xb5, 0x66,
	0x96, 0xe9, 0x39, 0x2b, 0xd7, 0x62, 0xbe, 0xd4,
	0x6a, 0x92, 0xd8, 0xd0, 0xa4, 0x18, 0x4d, 0x42};

uint8_t tv_pairing_ekh[16] = {
	0x2e, 0xec, 0xe5, 0x58, 0xe7, 0x8f, 0x1a, 0x96,
	0xd3, 0xbd, 0x40, 0x14, 0xa6, 0x7e, 0x29, 0x3a};

uint8_t tv_pairing_m[16] = {
	0xf9, 0xf1, 0x30, 0xa8, 0x2d, 0x5b, 0xe5, 0xc3,
	0xe1, 0x7a, 0xb0, 0xfd, 0x0f, 0x54, 0x40, 0x52};

uint8_t tv_lc_hmac[32] = {
	0x19, 0x16, 0xb1, 0x59, 0x73, 0xbe, 0xe3, 0x67,
	0xf0, 0x56, 0x50, 0x51, 0x44, 0x0f, 0x53, 0xa2,
	0xdf, 0x53, 0x8d, 0xce, 0xe2, 0x58, 0x1f, 0x65,
	0xf3, 0xbf, 0x03, 0x0e, 0x68, 0x14, 0xe0, 0xe4};

uint8_t tv_lc_lsb16_hmac[32] = {
	0xdf, 0x53, 0x8d, 0xce, 0xe2, 0x58, 0x1f, 0x65,
	0xf3, 0xbf, 0x03, 0x0e, 0x68, 0x14, 0xe0, 0xe4};

uint8_t tv_eskey[16] = {
	0xa5, 0xdb, 0xc5, 0x98, 0x50, 0xb1, 0xe4, 0x62,
	0x09, 0x7d, 0x14, 0x49, 0xcb, 0x01, 0x44, 0x24};

uint8_t tv_plain[32] = {
	0x00, 0x00, 0x01, 0x00, 0x01, 0x1b, 0x3c, 0x5b,
	0xb8, 0x00, 0x00, 0x00, 0x01, 0xb5, 0x85, 0x44,
	0x3b, 0x98, 0x00, 0x00, 0x00, 0x00, 0x01, 0xb2,
	0x44, 0x54, 0x47, 0x31, 0x41, 0xfe, 0x00, 0x00};

uint8_t tv_cipher[32] = {
	0x21, 0x8b, 0x92, 0xa3, 0x28, 0xc9, 0x84, 0x36,
	0x17, 0x46, 0x4e, 0xd8, 0x68, 0x7a, 0x67, 0xb0,
	0xeb, 0x66, 0x72, 0x30, 0x24, 0x5b, 0x70, 0x2a,
	0x25, 0x86, 0xab, 0x4a, 0x7a, 0x9a, 0x3a, 0x4f};

uint8_t tv_emkey_v22[128] = {
	0xa8, 0x55, 0xc2, 0xc4, 0xc6, 0xbe, 0xef, 0xcd,
	0xcb, 0x9f, 0xe3, 0x9f, 0x2a, 0xb7, 0x29, 0x76,
	0xfe, 0xd8, 0xda, 0xc9, 0x38, 0xfa, 0x39, 0xf0,
	0xab, 0xca, 0x8a, 0xed, 0x95, 0x7b, 0x93, 0xb2,
	0xdf, 0xd0, 0x7d, 0x09, 0x9d, 0x05, 0x96, 0x66,
	0x03, 0x6e, 0xba, 0xe0, 0x63, 0x0f, 0x30, 0x77,
	0xc2, 0xbb, 0xe2, 0x11, 0x39, 0xe5, 0x27, 0x78,
	0xee, 0x64, 0xf2, 0x85, 0x36, 0x57, 0xc3, 0x39,
	0xd2, 0x7b, 0x79, 0x03, 0xb7, 0xcc, 0x82, 0xcb,
	0xf0, 0x62, 0x82, 0x43, 0x38, 0x09, 0x9b, 0x71,
	0xaa, 0x38, 0xa6, 0x3f, 0x48, 0x12, 0x6d, 0x8c,
	0x5e, 0x07, 0x90, 0x76, 0xac, 0x90, 0x99, 0x51,
	0x5b, 0x06, 0xa5, 0xfa, 0x50, 0xe4, 0xf9, 0x25,
	0xc3, 0x07, 0x12, 0x37, 0x64, 0x92, 0xd7, 0xdb,
	0xd3, 0x34, 0x1c, 0xe4, 0xfa, 0xdd, 0x09, 0xe6,
	0x28, 0x3d, 0x0c, 0xad, 0xa9, 0xd8, 0xe1, 0xb5};

uint8_t tv_pairing_ekh_v22[16] = {
	0xe6, 0x57, 0x8e, 0xbc, 0xc7, 0x68, 0x44, 0x87,
	0x88, 0x8a, 0x9b, 0xd7, 0xd6, 0xae, 0x38, 0xbe};

uint8_t tv_pairing_m_v22[16] = {
	0xf9, 0xf1, 0x30, 0xa8, 0x2d, 0x5b, 0xe5, 0xc3,
	0xe1, 0x7a, 0xb0, 0xfd, 0x0f, 0x54, 0x40, 0x52};

uint8_t tv_ske_eskey_v22[16] = {
	0xb6, 0x8b, 0x8a, 0xa4, 0xd2, 0xcb, 0xba, 0xff,
	0x53, 0x33, 0xc1, 0xd9, 0xbb, 0xb7, 0x10, 0xa9};

#endif

#endif

