#include <common.h>
#include "../tex.h"

short back_burgundy[16] __attribute__ ((section (".data"))) = {
0x1cc5,0x39ac,0x3651,0x4b37,0x5b7a,0x46d5,0x80c,0xc0f,0x1013,0x1418,0x311b,0x49fc,0x185a,0x671e,0x808,0x405,};

short front_burgundy[16] __attribute__ ((section (".data"))) = {
0x1ce6,0x35ee,0x4737,0x6b7d,0xc0d,0xc10,0x1015,0x1419,0x24bb,0x41bc,0x185a,0x567d,0x80a,0x406,0x3ab3,0x5338,};

short brown_burgundy[16] __attribute__ ((section (".data"))) = {
0xc0e,0xc0d,0x80c,0x80a,0x808,0x406,0x214d,0x190b,0x2d8f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,};

short motortop_burgundy[16] __attribute__ ((section (".data"))) = {
0x1015,0x1419,0x1012,0x24c2,0x1462,0x809,0xc0d,0x2d03,0x80a,0x2cfb,0x49fc,0x739e,0x3d88,0x4e2d,0x3545,0x41a9,};

short floor_burgundy[16] __attribute__ ((section (".data"))) = {
0x405,0x80a,0xc12,0x80c,0x1013,0x1417,0x1014,0x80e,0xc0b,0xc10,0xc0e,0x406,0xc0f,0x404,0x2,0x808,};

short motorside_burgundy[16] __attribute__ ((section (".data"))) = {
0xc10,0x1014,0x1015,0x809,0xc42,0x1ca2,0x2905,0x1418,0x4186,0x49ea,0x524f,0x820,0x1016,0x2cfb,0x49fc,0x739e,};

short bridge_burgundy[16] __attribute__ ((section (".data"))) = {
0x18a3,0x2926,0x407,0x1014,0x207a,0x80a,0x1017,0x209b,0x3dca,0xc0e,0x45dc,0x5a9d,0x4a2e,0x5ed3,0x5271,0x6f57,};

short exhaust_burgundy[16] __attribute__ ((section (".data"))) = {
0x808,0x80c,0x1015,0x1418,0x4630,0x56b3,0x5ed6,0x4a52,0x6b37,0x779c,0x6f59,0x41ec,0x318a,0x18c5,0x2528,0xc63,};

Texture PAINT16[] __attribute__ ((section (".sdata"))) = {
	[0] =
	{
		.front = (char*)front_burgundy,
		.back = (char*)back_burgundy,
		.floor = (char*)floor_burgundy,
		.brown = (char*)brown_burgundy,
		.motorside = (char*)motorside_burgundy,
		.motortop = (char*)motortop_burgundy,
		.bridge = (char*)bridge_burgundy,
		.exhaust = (char*)exhaust_burgundy,
	},
};