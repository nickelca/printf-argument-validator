#ifndef FOREACH_H
#define FOREACH_H

#define FOR_EACH_CONCAT(a, b) FOR_EACH_CONCAT_1(a, b)
#define FOR_EACH_CONCAT_1(a, b) a##b

#define FOR_EACH_0(macro, x, ...)
#define FOR_EACH_1(macro, x, ...) macro(x) FOR_EACH_0(macro, __VA_ARGS__)
#define FOR_EACH_2(macro, x, ...) macro(x) FOR_EACH_1(macro, __VA_ARGS__)
#define FOR_EACH_3(macro, x, ...) macro(x) FOR_EACH_2(macro, __VA_ARGS__)
#define FOR_EACH_4(macro, x, ...) macro(x) FOR_EACH_3(macro, __VA_ARGS__)
#define FOR_EACH_5(macro, x, ...) macro(x) FOR_EACH_4(macro, __VA_ARGS__)
#define FOR_EACH_6(macro, x, ...) macro(x) FOR_EACH_5(macro, __VA_ARGS__)
#define FOR_EACH_7(macro, x, ...) macro(x) FOR_EACH_6(macro, __VA_ARGS__)
#define FOR_EACH_8(macro, x, ...) macro(x) FOR_EACH_7(macro, __VA_ARGS__)
#define FOR_EACH_9(macro, x, ...) macro(x) FOR_EACH_8(macro, __VA_ARGS__)
#define FOR_EACH_10(macro, x, ...) macro(x) FOR_EACH_9(macro, __VA_ARGS__)
#define FOR_EACH_11(macro, x, ...) macro(x) FOR_EACH_10(macro, __VA_ARGS__)
#define FOR_EACH_12(macro, x, ...) macro(x) FOR_EACH_11(macro, __VA_ARGS__)
#define FOR_EACH_13(macro, x, ...) macro(x) FOR_EACH_12(macro, __VA_ARGS__)
#define FOR_EACH_14(macro, x, ...) macro(x) FOR_EACH_13(macro, __VA_ARGS__)
#define FOR_EACH_15(macro, x, ...) macro(x) FOR_EACH_14(macro, __VA_ARGS__)
#define FOR_EACH_16(macro, x, ...) macro(x) FOR_EACH_15(macro, __VA_ARGS__)
#define FOR_EACH_17(macro, x, ...) macro(x) FOR_EACH_16(macro, __VA_ARGS__)
#define FOR_EACH_18(macro, x, ...) macro(x) FOR_EACH_17(macro, __VA_ARGS__)
#define FOR_EACH_19(macro, x, ...) macro(x) FOR_EACH_18(macro, __VA_ARGS__)
#define FOR_EACH_20(macro, x, ...) macro(x) FOR_EACH_19(macro, __VA_ARGS__)
#define FOR_EACH_21(macro, x, ...) macro(x) FOR_EACH_20(macro, __VA_ARGS__)
#define FOR_EACH_22(macro, x, ...) macro(x) FOR_EACH_21(macro, __VA_ARGS__)
#define FOR_EACH_23(macro, x, ...) macro(x) FOR_EACH_22(macro, __VA_ARGS__)
#define FOR_EACH_24(macro, x, ...) macro(x) FOR_EACH_23(macro, __VA_ARGS__)
#define FOR_EACH_25(macro, x, ...) macro(x) FOR_EACH_24(macro, __VA_ARGS__)
#define FOR_EACH_26(macro, x, ...) macro(x) FOR_EACH_25(macro, __VA_ARGS__)
#define FOR_EACH_27(macro, x, ...) macro(x) FOR_EACH_26(macro, __VA_ARGS__)
#define FOR_EACH_28(macro, x, ...) macro(x) FOR_EACH_27(macro, __VA_ARGS__)
#define FOR_EACH_29(macro, x, ...) macro(x) FOR_EACH_28(macro, __VA_ARGS__)
#define FOR_EACH_30(macro, x, ...) macro(x) FOR_EACH_29(macro, __VA_ARGS__)
#define FOR_EACH_31(macro, x, ...) macro(x) FOR_EACH_30(macro, __VA_ARGS__)
#define FOR_EACH_32(macro, x, ...) macro(x) FOR_EACH_31(macro, __VA_ARGS__)
#define FOR_EACH_33(macro, x, ...) macro(x) FOR_EACH_32(macro, __VA_ARGS__)
#define FOR_EACH_34(macro, x, ...) macro(x) FOR_EACH_33(macro, __VA_ARGS__)
#define FOR_EACH_35(macro, x, ...) macro(x) FOR_EACH_34(macro, __VA_ARGS__)
#define FOR_EACH_36(macro, x, ...) macro(x) FOR_EACH_35(macro, __VA_ARGS__)
#define FOR_EACH_37(macro, x, ...) macro(x) FOR_EACH_36(macro, __VA_ARGS__)
#define FOR_EACH_38(macro, x, ...) macro(x) FOR_EACH_37(macro, __VA_ARGS__)
#define FOR_EACH_39(macro, x, ...) macro(x) FOR_EACH_38(macro, __VA_ARGS__)
#define FOR_EACH_40(macro, x, ...) macro(x) FOR_EACH_39(macro, __VA_ARGS__)
#define FOR_EACH_41(macro, x, ...) macro(x) FOR_EACH_40(macro, __VA_ARGS__)
#define FOR_EACH_42(macro, x, ...) macro(x) FOR_EACH_41(macro, __VA_ARGS__)
#define FOR_EACH_43(macro, x, ...) macro(x) FOR_EACH_42(macro, __VA_ARGS__)
#define FOR_EACH_44(macro, x, ...) macro(x) FOR_EACH_43(macro, __VA_ARGS__)
#define FOR_EACH_45(macro, x, ...) macro(x) FOR_EACH_44(macro, __VA_ARGS__)
#define FOR_EACH_46(macro, x, ...) macro(x) FOR_EACH_45(macro, __VA_ARGS__)
#define FOR_EACH_47(macro, x, ...) macro(x) FOR_EACH_46(macro, __VA_ARGS__)
#define FOR_EACH_48(macro, x, ...) macro(x) FOR_EACH_47(macro, __VA_ARGS__)
#define FOR_EACH_49(macro, x, ...) macro(x) FOR_EACH_48(macro, __VA_ARGS__)
#define FOR_EACH_50(macro, x, ...) macro(x) FOR_EACH_49(macro, __VA_ARGS__)
#define FOR_EACH_51(macro, x, ...) macro(x) FOR_EACH_50(macro, __VA_ARGS__)
#define FOR_EACH_52(macro, x, ...) macro(x) FOR_EACH_51(macro, __VA_ARGS__)
#define FOR_EACH_53(macro, x, ...) macro(x) FOR_EACH_52(macro, __VA_ARGS__)
#define FOR_EACH_54(macro, x, ...) macro(x) FOR_EACH_53(macro, __VA_ARGS__)
#define FOR_EACH_55(macro, x, ...) macro(x) FOR_EACH_54(macro, __VA_ARGS__)
#define FOR_EACH_56(macro, x, ...) macro(x) FOR_EACH_55(macro, __VA_ARGS__)
#define FOR_EACH_57(macro, x, ...) macro(x) FOR_EACH_56(macro, __VA_ARGS__)
#define FOR_EACH_58(macro, x, ...) macro(x) FOR_EACH_57(macro, __VA_ARGS__)
#define FOR_EACH_59(macro, x, ...) macro(x) FOR_EACH_58(macro, __VA_ARGS__)
#define FOR_EACH_60(macro, x, ...) macro(x) FOR_EACH_59(macro, __VA_ARGS__)
#define FOR_EACH_61(macro, x, ...) macro(x) FOR_EACH_60(macro, __VA_ARGS__)
#define FOR_EACH_62(macro, x, ...) macro(x) FOR_EACH_61(macro, __VA_ARGS__)
#define FOR_EACH_63(macro, x, ...) macro(x) FOR_EACH_62(macro, __VA_ARGS__)
#define FOR_EACH_64(macro, x, ...) macro(x) FOR_EACH_63(macro, __VA_ARGS__)
#define FOR_EACH_65(macro, x, ...) macro(x) FOR_EACH_64(macro, __VA_ARGS__)
#define FOR_EACH_66(macro, x, ...) macro(x) FOR_EACH_65(macro, __VA_ARGS__)
#define FOR_EACH_67(macro, x, ...) macro(x) FOR_EACH_66(macro, __VA_ARGS__)
#define FOR_EACH_68(macro, x, ...) macro(x) FOR_EACH_67(macro, __VA_ARGS__)
#define FOR_EACH_69(macro, x, ...) macro(x) FOR_EACH_68(macro, __VA_ARGS__)
#define FOR_EACH_70(macro, x, ...) macro(x) FOR_EACH_69(macro, __VA_ARGS__)
#define FOR_EACH_71(macro, x, ...) macro(x) FOR_EACH_70(macro, __VA_ARGS__)
#define FOR_EACH_72(macro, x, ...) macro(x) FOR_EACH_71(macro, __VA_ARGS__)
#define FOR_EACH_73(macro, x, ...) macro(x) FOR_EACH_72(macro, __VA_ARGS__)
#define FOR_EACH_74(macro, x, ...) macro(x) FOR_EACH_73(macro, __VA_ARGS__)
#define FOR_EACH_75(macro, x, ...) macro(x) FOR_EACH_74(macro, __VA_ARGS__)
#define FOR_EACH_76(macro, x, ...) macro(x) FOR_EACH_75(macro, __VA_ARGS__)
#define FOR_EACH_77(macro, x, ...) macro(x) FOR_EACH_76(macro, __VA_ARGS__)
#define FOR_EACH_78(macro, x, ...) macro(x) FOR_EACH_77(macro, __VA_ARGS__)
#define FOR_EACH_79(macro, x, ...) macro(x) FOR_EACH_78(macro, __VA_ARGS__)
#define FOR_EACH_80(macro, x, ...) macro(x) FOR_EACH_79(macro, __VA_ARGS__)
#define FOR_EACH_81(macro, x, ...) macro(x) FOR_EACH_80(macro, __VA_ARGS__)
#define FOR_EACH_82(macro, x, ...) macro(x) FOR_EACH_81(macro, __VA_ARGS__)
#define FOR_EACH_83(macro, x, ...) macro(x) FOR_EACH_82(macro, __VA_ARGS__)
#define FOR_EACH_84(macro, x, ...) macro(x) FOR_EACH_83(macro, __VA_ARGS__)
#define FOR_EACH_85(macro, x, ...) macro(x) FOR_EACH_84(macro, __VA_ARGS__)
#define FOR_EACH_86(macro, x, ...) macro(x) FOR_EACH_85(macro, __VA_ARGS__)
#define FOR_EACH_87(macro, x, ...) macro(x) FOR_EACH_86(macro, __VA_ARGS__)
#define FOR_EACH_88(macro, x, ...) macro(x) FOR_EACH_87(macro, __VA_ARGS__)
#define FOR_EACH_89(macro, x, ...) macro(x) FOR_EACH_88(macro, __VA_ARGS__)
#define FOR_EACH_90(macro, x, ...) macro(x) FOR_EACH_89(macro, __VA_ARGS__)
#define FOR_EACH_91(macro, x, ...) macro(x) FOR_EACH_90(macro, __VA_ARGS__)
#define FOR_EACH_92(macro, x, ...) macro(x) FOR_EACH_91(macro, __VA_ARGS__)
#define FOR_EACH_93(macro, x, ...) macro(x) FOR_EACH_92(macro, __VA_ARGS__)
#define FOR_EACH_94(macro, x, ...) macro(x) FOR_EACH_93(macro, __VA_ARGS__)
#define FOR_EACH_95(macro, x, ...) macro(x) FOR_EACH_94(macro, __VA_ARGS__)
#define FOR_EACH_96(macro, x, ...) macro(x) FOR_EACH_95(macro, __VA_ARGS__)
#define FOR_EACH_97(macro, x, ...) macro(x) FOR_EACH_96(macro, __VA_ARGS__)
#define FOR_EACH_98(macro, x, ...) macro(x) FOR_EACH_97(macro, __VA_ARGS__)
#define FOR_EACH_99(macro, x, ...) macro(x) FOR_EACH_98(macro, __VA_ARGS__)
#define FOR_EACH_100(macro, x, ...) macro(x) FOR_EACH_99(macro, __VA_ARGS__)
#define FOR_EACH_101(macro, x, ...) macro(x) FOR_EACH_100(macro, __VA_ARGS__)
#define FOR_EACH_102(macro, x, ...) macro(x) FOR_EACH_101(macro, __VA_ARGS__)
#define FOR_EACH_103(macro, x, ...) macro(x) FOR_EACH_102(macro, __VA_ARGS__)
#define FOR_EACH_104(macro, x, ...) macro(x) FOR_EACH_103(macro, __VA_ARGS__)
#define FOR_EACH_105(macro, x, ...) macro(x) FOR_EACH_104(macro, __VA_ARGS__)
#define FOR_EACH_106(macro, x, ...) macro(x) FOR_EACH_105(macro, __VA_ARGS__)
#define FOR_EACH_107(macro, x, ...) macro(x) FOR_EACH_106(macro, __VA_ARGS__)
#define FOR_EACH_108(macro, x, ...) macro(x) FOR_EACH_107(macro, __VA_ARGS__)
#define FOR_EACH_109(macro, x, ...) macro(x) FOR_EACH_108(macro, __VA_ARGS__)
#define FOR_EACH_110(macro, x, ...) macro(x) FOR_EACH_109(macro, __VA_ARGS__)
#define FOR_EACH_111(macro, x, ...) macro(x) FOR_EACH_110(macro, __VA_ARGS__)
#define FOR_EACH_112(macro, x, ...) macro(x) FOR_EACH_111(macro, __VA_ARGS__)
#define FOR_EACH_113(macro, x, ...) macro(x) FOR_EACH_112(macro, __VA_ARGS__)
#define FOR_EACH_114(macro, x, ...) macro(x) FOR_EACH_113(macro, __VA_ARGS__)
#define FOR_EACH_115(macro, x, ...) macro(x) FOR_EACH_114(macro, __VA_ARGS__)
#define FOR_EACH_116(macro, x, ...) macro(x) FOR_EACH_115(macro, __VA_ARGS__)
#define FOR_EACH_117(macro, x, ...) macro(x) FOR_EACH_116(macro, __VA_ARGS__)
#define FOR_EACH_118(macro, x, ...) macro(x) FOR_EACH_117(macro, __VA_ARGS__)
#define FOR_EACH_119(macro, x, ...) macro(x) FOR_EACH_118(macro, __VA_ARGS__)
#define FOR_EACH_120(macro, x, ...) macro(x) FOR_EACH_119(macro, __VA_ARGS__)
#define FOR_EACH_121(macro, x, ...) macro(x) FOR_EACH_120(macro, __VA_ARGS__)
#define FOR_EACH_122(macro, x, ...) macro(x) FOR_EACH_121(macro, __VA_ARGS__)
#define FOR_EACH_123(macro, x, ...) macro(x) FOR_EACH_122(macro, __VA_ARGS__)
#define FOR_EACH_124(macro, x, ...) macro(x) FOR_EACH_123(macro, __VA_ARGS__)
#define FOR_EACH_125(macro, x, ...) macro(x) FOR_EACH_124(macro, __VA_ARGS__)
#define FOR_EACH_126(macro, x, ...) macro(x) FOR_EACH_125(macro, __VA_ARGS__)
#define FOR_EACH_127(macro, x, ...) macro(x) FOR_EACH_126(macro, __VA_ARGS__)
#define FOR_EACH_128(macro, x, ...) macro(x) FOR_EACH_127(macro, __VA_ARGS__)
#define FOR_EACH_129(macro, x, ...) macro(x) FOR_EACH_128(macro, __VA_ARGS__)
#define FOR_EACH_130(macro, x, ...) macro(x) FOR_EACH_129(macro, __VA_ARGS__)
#define FOR_EACH_131(macro, x, ...) macro(x) FOR_EACH_130(macro, __VA_ARGS__)
#define FOR_EACH_132(macro, x, ...) macro(x) FOR_EACH_131(macro, __VA_ARGS__)
#define FOR_EACH_133(macro, x, ...) macro(x) FOR_EACH_132(macro, __VA_ARGS__)
#define FOR_EACH_134(macro, x, ...) macro(x) FOR_EACH_133(macro, __VA_ARGS__)
#define FOR_EACH_135(macro, x, ...) macro(x) FOR_EACH_134(macro, __VA_ARGS__)
#define FOR_EACH_136(macro, x, ...) macro(x) FOR_EACH_135(macro, __VA_ARGS__)
#define FOR_EACH_137(macro, x, ...) macro(x) FOR_EACH_136(macro, __VA_ARGS__)
#define FOR_EACH_138(macro, x, ...) macro(x) FOR_EACH_137(macro, __VA_ARGS__)
#define FOR_EACH_139(macro, x, ...) macro(x) FOR_EACH_138(macro, __VA_ARGS__)
#define FOR_EACH_140(macro, x, ...) macro(x) FOR_EACH_139(macro, __VA_ARGS__)
#define FOR_EACH_141(macro, x, ...) macro(x) FOR_EACH_140(macro, __VA_ARGS__)
#define FOR_EACH_142(macro, x, ...) macro(x) FOR_EACH_141(macro, __VA_ARGS__)
#define FOR_EACH_143(macro, x, ...) macro(x) FOR_EACH_142(macro, __VA_ARGS__)
#define FOR_EACH_144(macro, x, ...) macro(x) FOR_EACH_143(macro, __VA_ARGS__)
#define FOR_EACH_145(macro, x, ...) macro(x) FOR_EACH_144(macro, __VA_ARGS__)
#define FOR_EACH_146(macro, x, ...) macro(x) FOR_EACH_145(macro, __VA_ARGS__)
#define FOR_EACH_147(macro, x, ...) macro(x) FOR_EACH_146(macro, __VA_ARGS__)
#define FOR_EACH_148(macro, x, ...) macro(x) FOR_EACH_147(macro, __VA_ARGS__)
#define FOR_EACH_149(macro, x, ...) macro(x) FOR_EACH_148(macro, __VA_ARGS__)
#define FOR_EACH_150(macro, x, ...) macro(x) FOR_EACH_149(macro, __VA_ARGS__)
#define FOR_EACH_151(macro, x, ...) macro(x) FOR_EACH_150(macro, __VA_ARGS__)
#define FOR_EACH_152(macro, x, ...) macro(x) FOR_EACH_151(macro, __VA_ARGS__)
#define FOR_EACH_153(macro, x, ...) macro(x) FOR_EACH_152(macro, __VA_ARGS__)
#define FOR_EACH_154(macro, x, ...) macro(x) FOR_EACH_153(macro, __VA_ARGS__)
#define FOR_EACH_155(macro, x, ...) macro(x) FOR_EACH_154(macro, __VA_ARGS__)
#define FOR_EACH_156(macro, x, ...) macro(x) FOR_EACH_155(macro, __VA_ARGS__)
#define FOR_EACH_157(macro, x, ...) macro(x) FOR_EACH_156(macro, __VA_ARGS__)
#define FOR_EACH_158(macro, x, ...) macro(x) FOR_EACH_157(macro, __VA_ARGS__)
#define FOR_EACH_159(macro, x, ...) macro(x) FOR_EACH_158(macro, __VA_ARGS__)
#define FOR_EACH_160(macro, x, ...) macro(x) FOR_EACH_159(macro, __VA_ARGS__)
#define FOR_EACH_161(macro, x, ...) macro(x) FOR_EACH_160(macro, __VA_ARGS__)
#define FOR_EACH_162(macro, x, ...) macro(x) FOR_EACH_161(macro, __VA_ARGS__)
#define FOR_EACH_163(macro, x, ...) macro(x) FOR_EACH_162(macro, __VA_ARGS__)
#define FOR_EACH_164(macro, x, ...) macro(x) FOR_EACH_163(macro, __VA_ARGS__)
#define FOR_EACH_165(macro, x, ...) macro(x) FOR_EACH_164(macro, __VA_ARGS__)
#define FOR_EACH_166(macro, x, ...) macro(x) FOR_EACH_165(macro, __VA_ARGS__)
#define FOR_EACH_167(macro, x, ...) macro(x) FOR_EACH_166(macro, __VA_ARGS__)
#define FOR_EACH_168(macro, x, ...) macro(x) FOR_EACH_167(macro, __VA_ARGS__)
#define FOR_EACH_169(macro, x, ...) macro(x) FOR_EACH_168(macro, __VA_ARGS__)
#define FOR_EACH_170(macro, x, ...) macro(x) FOR_EACH_169(macro, __VA_ARGS__)
#define FOR_EACH_171(macro, x, ...) macro(x) FOR_EACH_170(macro, __VA_ARGS__)
#define FOR_EACH_172(macro, x, ...) macro(x) FOR_EACH_171(macro, __VA_ARGS__)
#define FOR_EACH_173(macro, x, ...) macro(x) FOR_EACH_172(macro, __VA_ARGS__)
#define FOR_EACH_174(macro, x, ...) macro(x) FOR_EACH_173(macro, __VA_ARGS__)
#define FOR_EACH_175(macro, x, ...) macro(x) FOR_EACH_174(macro, __VA_ARGS__)
#define FOR_EACH_176(macro, x, ...) macro(x) FOR_EACH_175(macro, __VA_ARGS__)
#define FOR_EACH_177(macro, x, ...) macro(x) FOR_EACH_176(macro, __VA_ARGS__)
#define FOR_EACH_178(macro, x, ...) macro(x) FOR_EACH_177(macro, __VA_ARGS__)
#define FOR_EACH_179(macro, x, ...) macro(x) FOR_EACH_178(macro, __VA_ARGS__)
#define FOR_EACH_180(macro, x, ...) macro(x) FOR_EACH_179(macro, __VA_ARGS__)
#define FOR_EACH_181(macro, x, ...) macro(x) FOR_EACH_180(macro, __VA_ARGS__)
#define FOR_EACH_182(macro, x, ...) macro(x) FOR_EACH_181(macro, __VA_ARGS__)
#define FOR_EACH_183(macro, x, ...) macro(x) FOR_EACH_182(macro, __VA_ARGS__)
#define FOR_EACH_184(macro, x, ...) macro(x) FOR_EACH_183(macro, __VA_ARGS__)
#define FOR_EACH_185(macro, x, ...) macro(x) FOR_EACH_184(macro, __VA_ARGS__)
#define FOR_EACH_186(macro, x, ...) macro(x) FOR_EACH_185(macro, __VA_ARGS__)
#define FOR_EACH_187(macro, x, ...) macro(x) FOR_EACH_186(macro, __VA_ARGS__)
#define FOR_EACH_188(macro, x, ...) macro(x) FOR_EACH_187(macro, __VA_ARGS__)
#define FOR_EACH_189(macro, x, ...) macro(x) FOR_EACH_188(macro, __VA_ARGS__)
#define FOR_EACH_190(macro, x, ...) macro(x) FOR_EACH_189(macro, __VA_ARGS__)
#define FOR_EACH_191(macro, x, ...) macro(x) FOR_EACH_190(macro, __VA_ARGS__)
#define FOR_EACH_192(macro, x, ...) macro(x) FOR_EACH_191(macro, __VA_ARGS__)
#define FOR_EACH_193(macro, x, ...) macro(x) FOR_EACH_192(macro, __VA_ARGS__)
#define FOR_EACH_194(macro, x, ...) macro(x) FOR_EACH_193(macro, __VA_ARGS__)
#define FOR_EACH_195(macro, x, ...) macro(x) FOR_EACH_194(macro, __VA_ARGS__)
#define FOR_EACH_196(macro, x, ...) macro(x) FOR_EACH_195(macro, __VA_ARGS__)
#define FOR_EACH_197(macro, x, ...) macro(x) FOR_EACH_196(macro, __VA_ARGS__)
#define FOR_EACH_198(macro, x, ...) macro(x) FOR_EACH_197(macro, __VA_ARGS__)
#define FOR_EACH_199(macro, x, ...) macro(x) FOR_EACH_198(macro, __VA_ARGS__)
#define FOR_EACH_200(macro, x, ...) macro(x) FOR_EACH_199(macro, __VA_ARGS__)
#define FOR_EACH_201(macro, x, ...) macro(x) FOR_EACH_200(macro, __VA_ARGS__)
#define FOR_EACH_202(macro, x, ...) macro(x) FOR_EACH_201(macro, __VA_ARGS__)
#define FOR_EACH_203(macro, x, ...) macro(x) FOR_EACH_202(macro, __VA_ARGS__)
#define FOR_EACH_204(macro, x, ...) macro(x) FOR_EACH_203(macro, __VA_ARGS__)
#define FOR_EACH_205(macro, x, ...) macro(x) FOR_EACH_204(macro, __VA_ARGS__)
#define FOR_EACH_206(macro, x, ...) macro(x) FOR_EACH_205(macro, __VA_ARGS__)
#define FOR_EACH_207(macro, x, ...) macro(x) FOR_EACH_206(macro, __VA_ARGS__)
#define FOR_EACH_208(macro, x, ...) macro(x) FOR_EACH_207(macro, __VA_ARGS__)
#define FOR_EACH_209(macro, x, ...) macro(x) FOR_EACH_208(macro, __VA_ARGS__)
#define FOR_EACH_210(macro, x, ...) macro(x) FOR_EACH_209(macro, __VA_ARGS__)
#define FOR_EACH_211(macro, x, ...) macro(x) FOR_EACH_210(macro, __VA_ARGS__)
#define FOR_EACH_212(macro, x, ...) macro(x) FOR_EACH_211(macro, __VA_ARGS__)
#define FOR_EACH_213(macro, x, ...) macro(x) FOR_EACH_212(macro, __VA_ARGS__)
#define FOR_EACH_214(macro, x, ...) macro(x) FOR_EACH_213(macro, __VA_ARGS__)
#define FOR_EACH_215(macro, x, ...) macro(x) FOR_EACH_214(macro, __VA_ARGS__)
#define FOR_EACH_216(macro, x, ...) macro(x) FOR_EACH_215(macro, __VA_ARGS__)
#define FOR_EACH_217(macro, x, ...) macro(x) FOR_EACH_216(macro, __VA_ARGS__)
#define FOR_EACH_218(macro, x, ...) macro(x) FOR_EACH_217(macro, __VA_ARGS__)
#define FOR_EACH_219(macro, x, ...) macro(x) FOR_EACH_218(macro, __VA_ARGS__)
#define FOR_EACH_220(macro, x, ...) macro(x) FOR_EACH_219(macro, __VA_ARGS__)
#define FOR_EACH_221(macro, x, ...) macro(x) FOR_EACH_220(macro, __VA_ARGS__)
#define FOR_EACH_222(macro, x, ...) macro(x) FOR_EACH_221(macro, __VA_ARGS__)
#define FOR_EACH_223(macro, x, ...) macro(x) FOR_EACH_222(macro, __VA_ARGS__)
#define FOR_EACH_224(macro, x, ...) macro(x) FOR_EACH_223(macro, __VA_ARGS__)
#define FOR_EACH_225(macro, x, ...) macro(x) FOR_EACH_224(macro, __VA_ARGS__)
#define FOR_EACH_226(macro, x, ...) macro(x) FOR_EACH_225(macro, __VA_ARGS__)
#define FOR_EACH_227(macro, x, ...) macro(x) FOR_EACH_226(macro, __VA_ARGS__)
#define FOR_EACH_228(macro, x, ...) macro(x) FOR_EACH_227(macro, __VA_ARGS__)
#define FOR_EACH_229(macro, x, ...) macro(x) FOR_EACH_228(macro, __VA_ARGS__)
#define FOR_EACH_230(macro, x, ...) macro(x) FOR_EACH_229(macro, __VA_ARGS__)
#define FOR_EACH_231(macro, x, ...) macro(x) FOR_EACH_230(macro, __VA_ARGS__)
#define FOR_EACH_232(macro, x, ...) macro(x) FOR_EACH_231(macro, __VA_ARGS__)
#define FOR_EACH_233(macro, x, ...) macro(x) FOR_EACH_232(macro, __VA_ARGS__)
#define FOR_EACH_234(macro, x, ...) macro(x) FOR_EACH_233(macro, __VA_ARGS__)
#define FOR_EACH_235(macro, x, ...) macro(x) FOR_EACH_234(macro, __VA_ARGS__)
#define FOR_EACH_236(macro, x, ...) macro(x) FOR_EACH_235(macro, __VA_ARGS__)
#define FOR_EACH_237(macro, x, ...) macro(x) FOR_EACH_236(macro, __VA_ARGS__)
#define FOR_EACH_238(macro, x, ...) macro(x) FOR_EACH_237(macro, __VA_ARGS__)
#define FOR_EACH_239(macro, x, ...) macro(x) FOR_EACH_238(macro, __VA_ARGS__)
#define FOR_EACH_240(macro, x, ...) macro(x) FOR_EACH_239(macro, __VA_ARGS__)
#define FOR_EACH_241(macro, x, ...) macro(x) FOR_EACH_240(macro, __VA_ARGS__)
#define FOR_EACH_242(macro, x, ...) macro(x) FOR_EACH_241(macro, __VA_ARGS__)
#define FOR_EACH_243(macro, x, ...) macro(x) FOR_EACH_242(macro, __VA_ARGS__)
#define FOR_EACH_244(macro, x, ...) macro(x) FOR_EACH_243(macro, __VA_ARGS__)
#define FOR_EACH_245(macro, x, ...) macro(x) FOR_EACH_244(macro, __VA_ARGS__)
#define FOR_EACH_246(macro, x, ...) macro(x) FOR_EACH_245(macro, __VA_ARGS__)
#define FOR_EACH_247(macro, x, ...) macro(x) FOR_EACH_246(macro, __VA_ARGS__)
#define FOR_EACH_248(macro, x, ...) macro(x) FOR_EACH_247(macro, __VA_ARGS__)
#define FOR_EACH_249(macro, x, ...) macro(x) FOR_EACH_248(macro, __VA_ARGS__)
#define FOR_EACH_250(macro, x, ...) macro(x) FOR_EACH_249(macro, __VA_ARGS__)
#define FOR_EACH_251(macro, x, ...) macro(x) FOR_EACH_250(macro, __VA_ARGS__)
#define FOR_EACH_252(macro, x, ...) macro(x) FOR_EACH_251(macro, __VA_ARGS__)
#define FOR_EACH_253(macro, x, ...) macro(x) FOR_EACH_252(macro, __VA_ARGS__)
#define FOR_EACH_254(macro, x, ...) macro(x) FOR_EACH_253(macro, __VA_ARGS__)
#define FOR_EACH_255(macro, x, ...) macro(x) FOR_EACH_254(macro, __VA_ARGS__)
#define FOR_EACH_256(macro, x, ...) macro(x) FOR_EACH_255(macro, __VA_ARGS__)

#define FOR_EACH_NARG(...)                                                     \
    FOR_EACH_NARG_(__VA_ARGS__ __VA_OPT__(, ) FOR_EACH_RSEQ_N())
#define FOR_EACH_NARG_(...) FOR_EACH_ARG_N(__VA_ARGS__)
#define FOR_EACH_ARG_N(_1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, _93, _94, _95, _96, _97, _98, _99, _100, _101, _102, _103, _104, _105, _106, _107, _108, _109, _110, _111, _112, _113, _114, _115, _116, _117, _118, _119, _120, _121, _122, _123, _124, _125, _126, _127, _128, _129, _130, _131, _132, _133, _134, _135, _136, _137, _138, _139, _140, _141, _142, _143, _144, _145, _146, _147, _148, _149, _150, _151, _152, _153, _154, _155, _156, _157, _158, _159, _160, _161, _162, _163, _164, _165, _166, _167, _168, _169, _170, _171, _172, _173, _174, _175, _176, _177, _178, _179, _180, _181, _182, _183, _184, _185, _186, _187, _188, _189, _190, _191, _192, _193, _194, _195, _196, _197, _198, _199, _200, _201, _202, _203, _204, _205, _206, _207, _208, _209, _210, _211, _212, _213, _214, _215, _216, _217, _218, _219, _220, _221, _222, _223, _224, _225, _226, _227, _228, _229, _230, _231, _232, _233, _234, _235, _236, _237, _238, _239, _240, _241, _242, _243, _244, _245, _246, _247, _248, _249, _250, _251, _252, _253, _254, _255, _256, N, ...) N
#define FOR_EACH_RSEQ_N() 256, 255, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0

#define FOR_EACH_(N, macro, x, ...)                                            \
    FOR_EACH_CONCAT(FOR_EACH_, N)(macro, x, __VA_ARGS__)
#define FOR_EACH(macro, x, ...)                                                \
    FOR_EACH_(                                                                 \
        FOR_EACH_NARG(x __VA_OPT__(, ) __VA_ARGS__), macro, x, __VA_ARGS__     \
    )

#endif
