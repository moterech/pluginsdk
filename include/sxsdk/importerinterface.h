#pragma once

namespace sxsdk {
	class importer_interface : public plugin_interface {
	public:
	virtual int get_number_of_file_types ( void* aux =0 ) { return 1; }  // 0
	virtual int get_file_type (int i, void* aux = 0) { return int(0x20202020); }  // 1
	virtual const char *get_file_type_description (int i, void* aux = 0) { return 0; }  // 2
	virtual int get_number_of_file_extensions ( void* aux =0 ) { return 1; }  // 3
	virtual const char *get_file_extension (int i, void* aux = 0) = 0; // 4
	virtual const char *get_file_extension_description (int i, void* aux = 0) { return 0; }  // 5
	virtual bool accepts_text_stream ( void* aux =0 ) { return true; }  // 6
	virtual void do_import (sxsdk::scene_interface* scene, sxsdk::stream_interface* stream, sxsdk::text_stream_interface* text_stream, void* aux = 0) = 0; // 7
	virtual bool can_import_from_stream ( void* aux =0 ) { return true; }  // 8
	virtual bool skips_dialog ( void* aux =0 ) { return true; }  // 9
	virtual void do_pre_import (const sxsdk::mat4 & t, void* path) { }  // 10
	virtual bool can_access_external_sandbox ( void* aux =0 ) { return false; }  // 11
	virtual int get_number_of_access_files_outside_sandbox ( void* aux =0 ) { return 0; }  // 12
	virtual const char *get_access_file_path_outside_sandbox (int i, void* aux = 0) { return 0; }  // 13
	virtual int importer_interface_dummy14(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 14
	virtual int importer_interface_dummy15(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 15
	virtual int importer_interface_dummy16(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 16
	virtual int importer_interface_dummy17(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 17
	virtual int importer_interface_dummy18(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 18
	virtual int importer_interface_dummy19(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 19
	virtual int importer_interface_dummy20(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 20
	virtual int importer_interface_dummy21(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 21
	virtual int importer_interface_dummy22(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 22
	virtual int importer_interface_dummy23(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 23
	virtual int importer_interface_dummy24(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 24
	virtual int importer_interface_dummy25(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 25
	virtual int importer_interface_dummy26(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 26
	virtual int importer_interface_dummy27(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 27
	virtual int importer_interface_dummy28(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 28
	virtual int importer_interface_dummy29(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 29
	virtual int importer_interface_dummy30(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 30
	virtual int importer_interface_dummy31(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 31
	virtual int importer_interface_dummy32(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 32
	virtual int importer_interface_dummy33(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 33
	virtual int importer_interface_dummy34(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 34
	virtual int importer_interface_dummy35(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 35
	virtual int importer_interface_dummy36(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 36
	virtual int importer_interface_dummy37(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 37
	virtual int importer_interface_dummy38(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 38
	virtual int importer_interface_dummy39(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 39
	virtual int importer_interface_dummy40(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 40
	virtual int importer_interface_dummy41(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 41
	virtual int importer_interface_dummy42(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 42
	virtual int importer_interface_dummy43(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 43
	virtual int importer_interface_dummy44(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 44
	virtual int importer_interface_dummy45(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 45
	virtual int importer_interface_dummy46(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 46
	virtual int importer_interface_dummy47(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 47
	virtual int importer_interface_dummy48(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 48
	virtual int importer_interface_dummy49(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 49
	virtual int importer_interface_dummy50(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 50
	virtual int importer_interface_dummy51(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 51
	virtual int importer_interface_dummy52(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 52
	virtual int importer_interface_dummy53(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 53
	virtual int importer_interface_dummy54(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 54
	virtual int importer_interface_dummy55(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 55
	virtual int importer_interface_dummy56(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 56
	virtual int importer_interface_dummy57(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 57
	virtual int importer_interface_dummy58(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 58
	virtual int importer_interface_dummy59(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 59
	virtual int importer_interface_dummy60(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 60
	virtual int importer_interface_dummy61(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 61
	virtual int importer_interface_dummy62(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 62
	virtual int importer_interface_dummy63(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 63
	virtual int importer_interface_dummy64(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 64
	virtual int importer_interface_dummy65(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 65
	virtual int importer_interface_dummy66(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 66
	virtual int importer_interface_dummy67(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 67
	virtual int importer_interface_dummy68(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 68
	virtual int importer_interface_dummy69(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 69
	virtual int importer_interface_dummy70(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 70
	virtual int importer_interface_dummy71(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 71
	virtual int importer_interface_dummy72(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 72
	virtual int importer_interface_dummy73(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 73
	virtual int importer_interface_dummy74(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 74
	virtual int importer_interface_dummy75(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 75
	virtual int importer_interface_dummy76(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 76
	virtual int importer_interface_dummy77(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 77
	virtual int importer_interface_dummy78(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 78
	virtual int importer_interface_dummy79(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 79
	virtual int importer_interface_dummy80(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 80
	virtual int importer_interface_dummy81(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 81
	virtual int importer_interface_dummy82(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 82
	virtual int importer_interface_dummy83(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 83
	virtual int importer_interface_dummy84(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 84
	virtual int importer_interface_dummy85(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 85
	virtual int importer_interface_dummy86(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 86
	virtual int importer_interface_dummy87(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 87
	virtual int importer_interface_dummy88(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 88
	virtual int importer_interface_dummy89(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 89
	virtual int importer_interface_dummy90(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 90
	virtual int importer_interface_dummy91(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 91
	virtual int importer_interface_dummy92(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 92
	virtual int importer_interface_dummy93(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 93
	virtual int importer_interface_dummy94(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 94
	virtual int importer_interface_dummy95(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 95
	virtual int importer_interface_dummy96(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 96
	virtual int importer_interface_dummy97(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 97
	virtual int importer_interface_dummy98(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 98
	virtual int importer_interface_dummy99(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 99
	virtual int importer_interface_dummy100(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 100
	virtual int importer_interface_dummy101(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 101
	virtual int importer_interface_dummy102(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 102
	virtual int importer_interface_dummy103(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 103
	virtual int importer_interface_dummy104(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 104
	virtual int importer_interface_dummy105(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 105
	virtual int importer_interface_dummy106(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 106
	virtual int importer_interface_dummy107(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 107
	virtual int importer_interface_dummy108(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 108
	virtual int importer_interface_dummy109(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 109
	virtual int importer_interface_dummy110(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 110
	virtual int importer_interface_dummy111(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 111
	virtual int importer_interface_dummy112(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 112
	virtual int importer_interface_dummy113(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 113
	virtual int importer_interface_dummy114(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 114
	virtual int importer_interface_dummy115(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 115
	virtual int importer_interface_dummy116(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 116
	virtual int importer_interface_dummy117(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 117
	virtual int importer_interface_dummy118(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 118
	virtual int importer_interface_dummy119(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 119
	virtual int importer_interface_dummy120(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 120
	virtual int importer_interface_dummy121(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 121
	virtual int importer_interface_dummy122(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 122
	virtual int importer_interface_dummy123(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 123
	virtual int importer_interface_dummy124(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 124
	virtual int importer_interface_dummy125(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 125
	virtual int importer_interface_dummy126(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 126
	virtual int importer_interface_dummy127(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 127
	virtual int importer_interface_dummy128(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 128
	virtual int importer_interface_dummy129(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 129
	virtual int importer_interface_dummy130(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 130
	virtual int importer_interface_dummy131(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 131
	virtual int importer_interface_dummy132(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 132
	virtual int importer_interface_dummy133(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 133
	virtual int importer_interface_dummy134(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 134
	virtual int importer_interface_dummy135(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 135
	virtual int importer_interface_dummy136(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 136
	virtual int importer_interface_dummy137(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 137
	virtual int importer_interface_dummy138(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 138
	virtual int importer_interface_dummy139(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 139
	virtual int importer_interface_dummy140(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 140
	virtual int importer_interface_dummy141(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 141
	virtual int importer_interface_dummy142(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 142
	virtual int importer_interface_dummy143(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 143
	virtual int importer_interface_dummy144(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 144
	virtual int importer_interface_dummy145(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 145
	virtual int importer_interface_dummy146(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 146
	virtual int importer_interface_dummy147(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 147
	virtual int importer_interface_dummy148(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 148
	virtual int importer_interface_dummy149(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 149
	virtual int importer_interface_dummy150(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 150
	virtual int importer_interface_dummy151(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 151
	virtual int importer_interface_dummy152(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 152
	virtual int importer_interface_dummy153(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 153
	virtual int importer_interface_dummy154(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 154
	virtual int importer_interface_dummy155(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 155
	virtual int importer_interface_dummy156(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 156
	virtual int importer_interface_dummy157(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 157
	virtual int importer_interface_dummy158(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 158
	virtual int importer_interface_dummy159(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 159
	virtual int importer_interface_dummy160(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 160
	virtual int importer_interface_dummy161(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 161
	virtual int importer_interface_dummy162(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 162
	virtual int importer_interface_dummy163(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 163
	virtual int importer_interface_dummy164(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 164
	virtual int importer_interface_dummy165(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 165
	virtual int importer_interface_dummy166(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 166
	virtual int importer_interface_dummy167(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 167
	virtual int importer_interface_dummy168(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 168
	virtual int importer_interface_dummy169(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 169
	virtual int importer_interface_dummy170(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 170
	virtual int importer_interface_dummy171(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 171
	virtual int importer_interface_dummy172(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 172
	virtual int importer_interface_dummy173(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 173
	virtual int importer_interface_dummy174(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 174
	virtual int importer_interface_dummy175(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 175
	virtual int importer_interface_dummy176(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 176
	virtual int importer_interface_dummy177(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 177
	virtual int importer_interface_dummy178(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 178
	virtual int importer_interface_dummy179(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 179
	virtual int importer_interface_dummy180(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 180
	virtual int importer_interface_dummy181(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 181
	virtual int importer_interface_dummy182(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 182
	virtual int importer_interface_dummy183(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 183
	virtual int importer_interface_dummy184(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 184
	virtual int importer_interface_dummy185(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 185
	virtual int importer_interface_dummy186(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 186
	virtual int importer_interface_dummy187(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 187
	virtual int importer_interface_dummy188(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 188
	virtual int importer_interface_dummy189(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 189
	virtual int importer_interface_dummy190(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 190
	virtual int importer_interface_dummy191(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 191
	virtual int importer_interface_dummy192(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 192
	virtual int importer_interface_dummy193(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 193
	virtual int importer_interface_dummy194(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 194
	virtual int importer_interface_dummy195(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 195
	virtual int importer_interface_dummy196(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 196
	virtual int importer_interface_dummy197(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 197
	virtual int importer_interface_dummy198(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 198
	virtual int importer_interface_dummy199(void *) { assert(false); throw "invalid interface importer_interface"; return 0; } // 199
	};
}
