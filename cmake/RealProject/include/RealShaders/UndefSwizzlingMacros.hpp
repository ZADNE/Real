/*!
 *  @author    Dubsky Tomas
 */

// xyzw swizzles
#undef xx
#undef xxx
#undef xxxx
#undef yx
#undef xy
#undef yxx
#undef xyx
#undef xxy
#undef yxxx
#undef xyxx
#undef xxyx
#undef xxxy
#undef yy
#undef yyx
#undef yxy
#undef xyy
#undef yyxx
#undef yxyx
#undef yxxy
#undef xyyx
#undef xyxy
#undef xxyy
#undef yyy
#undef yyyx
#undef yyxy
#undef yxyy
#undef xyyy
#undef yyyy
#undef zx
#undef xz
#undef zxx
#undef xzx
#undef xxz
#undef zxxx
#undef xzxx
#undef xxzx
#undef xxxz
#undef zy
#undef yz
#undef zyx
#undef zxy
#undef yzx
#undef yxz
#undef xzy
#undef xyz
#undef zyxx
#undef zxyx
#undef zxxy
#undef yzxx
#undef yxzx
#undef yxxz
#undef xzyx
#undef xzxy
#undef xyzx
#undef xyxz
#undef xxzy
#undef xxyz
#undef zyy
#undef yzy
#undef yyz
#undef zyyx
#undef zyxy
#undef zxyy
#undef yzyx
#undef yzxy
#undef yyzx
#undef yyxz
#undef yxzy
#undef yxyz
#undef xzyy
#undef xyzy
#undef xyyz
#undef zyyy
#undef yzyy
#undef yyzy
#undef yyyz
#undef zz
#undef zzx
#undef zxz
#undef xzz
#undef zzxx
#undef zxzx
#undef zxxz
#undef xzzx
#undef xzxz
#undef xxzz
#undef zzy
#undef zyz
#undef yzz
#undef zzyx
#undef zzxy
#undef zyzx
#undef zyxz
#undef zxzy
#undef zxyz
#undef yzzx
#undef yzxz
#undef yxzz
#undef xzzy
#undef xzyz
#undef xyzz
#undef zzyy
#undef zyzy
#undef zyyz
#undef yzzy
#undef yzyz
#undef yyzz
#undef zzz
#undef zzzx
#undef zzxz
#undef zxzz
#undef xzzz
#undef zzzy
#undef zzyz
#undef zyzz
#undef yzzz
#undef zzzz
#undef wx
#undef xw
#undef wxx
#undef xwx
#undef xxw
#undef wxxx
#undef xwxx
#undef xxwx
#undef xxxw
#undef wy
#undef yw
#undef wyx
#undef wxy
#undef ywx
#undef yxw
#undef xwy
#undef xyw
#undef wyxx
#undef wxyx
#undef wxxy
#undef ywxx
#undef yxwx
#undef yxxw
#undef xwyx
#undef xwxy
#undef xywx
#undef xyxw
#undef xxwy
#undef xxyw
#undef wyy
#undef ywy
#undef yyw
#undef wyyx
#undef wyxy
#undef wxyy
#undef ywyx
#undef ywxy
#undef yywx
#undef yyxw
#undef yxwy
#undef yxyw
#undef xwyy
#undef xywy
#undef xyyw
#undef wyyy
#undef ywyy
#undef yywy
#undef yyyw
#undef wz
#undef zw
#undef wzx
#undef wxz
#undef zwx
#undef zxw
#undef xwz
#undef xzw
#undef wzxx
#undef wxzx
#undef wxxz
#undef zwxx
#undef zxwx
#undef zxxw
#undef xwzx
#undef xwxz
#undef xzwx
#undef xzxw
#undef xxwz
#undef xxzw
#undef wzy
#undef wyz
#undef zwy
#undef zyw
#undef ywz
#undef yzw
#undef wzyx
#undef wzxy
#undef wyzx
#undef wyxz
#undef wxzy
#undef wxyz
#undef zwyx
#undef zwxy
#undef zywx
#undef zyxw
#undef zxwy
#undef zxyw
#undef ywzx
#undef ywxz
#undef yzwx
#undef yzxw
#undef yxwz
#undef yxzw
#undef xwzy
#undef xwyz
#undef xzwy
#undef xzyw
#undef xywz
#undef xyzw
#undef wzyy
#undef wyzy
#undef wyyz
#undef zwyy
#undef zywy
#undef zyyw
#undef ywzy
#undef ywyz
#undef yzwy
#undef yzyw
#undef yywz
#undef yyzw
#undef wzz
#undef zwz
#undef zzw
#undef wzzx
#undef wzxz
#undef wxzz
#undef zwzx
#undef zwxz
#undef zzwx
#undef zzxw
#undef zxwz
#undef zxzw
#undef xwzz
#undef xzwz
#undef xzzw
#undef wzzy
#undef wzyz
#undef wyzz
#undef zwzy
#undef zwyz
#undef zzwy
#undef zzyw
#undef zywz
#undef zyzw
#undef ywzz
#undef yzwz
#undef yzzw
#undef wzzz
#undef zwzz
#undef zzwz
#undef zzzw
#undef ww
#undef wwx
#undef wxw
#undef xww
#undef wwxx
#undef wxwx
#undef wxxw
#undef xwwx
#undef xwxw
#undef xxww
#undef wwy
#undef wyw
#undef yww
#undef wwyx
#undef wwxy
#undef wywx
#undef wyxw
#undef wxwy
#undef wxyw
#undef ywwx
#undef ywxw
#undef yxww
#undef xwwy
#undef xwyw
#undef xyww
#undef wwyy
#undef wywy
#undef wyyw
#undef ywwy
#undef ywyw
#undef yyww
#undef wwz
#undef wzw
#undef zww
#undef wwzx
#undef wwxz
#undef wzwx
#undef wzxw
#undef wxwz
#undef wxzw
#undef zwwx
#undef zwxw
#undef zxww
#undef xwwz
#undef xwzw
#undef xzww
#undef wwzy
#undef wwyz
#undef wzwy
#undef wzyw
#undef wywz
#undef wyzw
#undef zwwy
#undef zwyw
#undef zyww
#undef ywwz
#undef ywzw
#undef yzww
#undef wwzz
#undef wzwz
#undef wzzw
#undef zwwz
#undef zwzw
#undef zzww
#undef www
#undef wwwx
#undef wwxw
#undef wxww
#undef xwww
#undef wwwy
#undef wwyw
#undef wyww
#undef ywww
#undef wwwz
#undef wwzw
#undef wzww
#undef zwww
#undef wwww

// rgba swizzles
#undef rr
#undef rrr
#undef rrrr
#undef gr
#undef rg
#undef grr
#undef rgr
#undef rrg
#undef grrr
#undef rgrr
#undef rrgr
#undef rrrg
#undef gg
#undef ggr
#undef grg
#undef rgg
#undef ggrr
#undef grgr
#undef grrg
#undef rggr
#undef rgrg
#undef rrgg
#undef ggg
#undef gggr
#undef ggrg
#undef grgg
#undef rggg
#undef gggg
#undef br
#undef rb
#undef brr
#undef rbr
#undef rrb
#undef brrr
#undef rbrr
#undef rrbr
#undef rrrb
#undef bg
#undef gb
#undef bgr
#undef brg
#undef gbr
#undef grb
#undef rbg
#undef rgb
#undef bgrr
#undef brgr
#undef brrg
#undef gbrr
#undef grbr
#undef grrb
#undef rbgr
#undef rbrg
#undef rgbr
#undef rgrb
#undef rrbg
#undef rrgb
#undef bgg
#undef gbg
#undef ggb
#undef bggr
#undef bgrg
#undef brgg
#undef gbgr
#undef gbrg
#undef ggbr
#undef ggrb
#undef grbg
#undef grgb
#undef rbgg
#undef rgbg
#undef rggb
#undef bggg
#undef gbgg
#undef ggbg
#undef gggb
#undef bb
#undef bbr
#undef brb
#undef rbb
#undef bbrr
#undef brbr
#undef brrb
#undef rbbr
#undef rbrb
#undef rrbb
#undef bbg
#undef bgb
#undef gbb
#undef bbgr
#undef bbrg
#undef bgbr
#undef bgrb
#undef brbg
#undef brgb
#undef gbbr
#undef gbrb
#undef grbb
#undef rbbg
#undef rbgb
#undef rgbb
#undef bbgg
#undef bgbg
#undef bggb
#undef gbbg
#undef gbgb
#undef ggbb
#undef bbb
#undef bbbr
#undef bbrb
#undef brbb
#undef rbbb
#undef bbbg
#undef bbgb
#undef bgbb
#undef gbbb
#undef bbbb
#undef ar
#undef ra
#undef arr
#undef rar
#undef rra
#undef arrr
#undef rarr
#undef rrar
#undef rrra
#undef ag
#undef ga
#undef agr
#undef arg
#undef gar
#undef gra
#undef rag
#undef rga
#undef agrr
#undef argr
#undef arrg
#undef garr
#undef grar
#undef grra
#undef ragr
#undef rarg
#undef rgar
#undef rgra
#undef rrag
#undef rrga
#undef agg
#undef gag
#undef gga
#undef aggr
#undef agrg
#undef argg
#undef gagr
#undef garg
#undef ggar
#undef ggra
#undef grag
#undef grga
#undef ragg
#undef rgag
#undef rgga
#undef aggg
#undef gagg
#undef ggag
#undef ggga
#undef ab
#undef ba
#undef abr
#undef arb
#undef bar
#undef bra
#undef rab
#undef rba
#undef abrr
#undef arbr
#undef arrb
#undef barr
#undef brar
#undef brra
#undef rabr
#undef rarb
#undef rbar
#undef rbra
#undef rrab
#undef rrba
#undef abg
#undef agb
#undef bag
#undef bga
#undef gab
#undef gba
#undef abgr
#undef abrg
#undef agbr
#undef agrb
#undef arbg
#undef argb
#undef bagr
#undef barg
#undef bgar
#undef bgra
#undef brag
#undef brga
#undef gabr
#undef garb
#undef gbar
#undef gbra
#undef grab
#undef grba
#undef rabg
#undef ragb
#undef rbag
#undef rbga
#undef rgab
#undef rgba
#undef abgg
#undef agbg
#undef aggb
#undef bagg
#undef bgag
#undef bgga
#undef gabg
#undef gagb
#undef gbag
#undef gbga
#undef ggab
#undef ggba
#undef abb
#undef bab
#undef bba
#undef abbr
#undef abrb
#undef arbb
#undef babr
#undef barb
#undef bbar
#undef bbra
#undef brab
#undef brba
#undef rabb
#undef rbab
#undef rbba
#undef abbg
#undef abgb
#undef agbb
#undef babg
#undef bagb
#undef bbag
#undef bbga
#undef bgab
#undef bgba
#undef gabb
#undef gbab
#undef gbba
#undef abbb
#undef babb
#undef bbab
#undef bbba
#undef aa
#undef aar
#undef ara
#undef raa
#undef aarr
#undef arar
#undef arra
#undef raar
#undef rara
#undef rraa
#undef aag
#undef aga
#undef gaa
#undef aagr
#undef aarg
#undef agar
#undef agra
#undef arag
#undef arga
#undef gaar
#undef gara
#undef graa
#undef raag
#undef raga
#undef rgaa
#undef aagg
#undef agag
#undef agga
#undef gaag
#undef gaga
#undef ggaa
#undef aab
#undef aba
#undef baa
#undef aabr
#undef aarb
#undef abar
#undef abra
#undef arab
#undef arba
#undef baar
#undef bara
#undef braa
#undef raab
#undef raba
#undef rbaa
#undef aabg
#undef aagb
#undef abag
#undef abga
#undef agab
#undef agba
#undef baag
#undef baga
#undef bgaa
#undef gaab
#undef gaba
#undef gbaa
#undef aabb
#undef abab
#undef abba
#undef baab
#undef baba
#undef bbaa
#undef aaa
#undef aaar
#undef aara
#undef araa
#undef raaa
#undef aaag
#undef aaga
#undef agaa
#undef gaaa
#undef aaab
#undef aaba
#undef abaa
#undef baaa
#undef aaaa

// stpq swizzles
#undef ss
#undef sss
#undef ssss
#undef ts
#undef st
#undef tss
#undef sts
#undef sst
#undef tsss
#undef stss
#undef ssts
#undef ssst
#undef tt
#undef tts
#undef tst
#undef stt
#undef ttss
#undef tsts
#undef tsst
#undef stts
#undef stst
#undef sstt
#undef ttt
#undef ttts
#undef ttst
#undef tstt
#undef sttt
#undef tttt
#undef ps
#undef sp
#undef pss
#undef sps
#undef ssp
#undef psss
#undef spss
#undef ssps
#undef sssp
#undef pt
#undef tp
#undef pts
#undef pst
#undef tps
#undef tsp
#undef spt
#undef stp
#undef ptss
#undef psts
#undef psst
#undef tpss
#undef tsps
#undef tssp
#undef spts
#undef spst
#undef stps
#undef stsp
#undef sspt
#undef sstp
#undef ptt
#undef tpt
#undef ttp
#undef ptts
#undef ptst
#undef pstt
#undef tpts
#undef tpst
#undef ttps
#undef ttsp
#undef tspt
#undef tstp
#undef sptt
#undef stpt
#undef sttp
#undef pttt
#undef tptt
#undef ttpt
#undef tttp
#undef pp
#undef pps
#undef psp
#undef spp
#undef ppss
#undef psps
#undef pssp
#undef spps
#undef spsp
#undef sspp
#undef ppt
#undef ptp
#undef tpp
#undef ppts
#undef ppst
#undef ptps
#undef ptsp
#undef pspt
#undef pstp
#undef tpps
#undef tpsp
#undef tspp
#undef sppt
#undef sptp
#undef stpp
#undef pptt
#undef ptpt
#undef pttp
#undef tppt
#undef tptp
#undef ttpp
#undef ppp
#undef ppps
#undef ppsp
#undef pspp
#undef sppp
#undef pppt
#undef pptp
#undef ptpp
#undef tppp
#undef pppp
#undef qs
#undef sq
#undef qss
#undef sqs
#undef ssq
#undef qsss
#undef sqss
#undef ssqs
#undef sssq
#undef qt
#undef tq
#undef qts
#undef qst
#undef tqs
#undef tsq
#undef sqt
#undef stq
#undef qtss
#undef qsts
#undef qsst
#undef tqss
#undef tsqs
#undef tssq
#undef sqts
#undef sqst
#undef stqs
#undef stsq
#undef ssqt
#undef sstq
#undef qtt
#undef tqt
#undef ttq
#undef qtts
#undef qtst
#undef qstt
#undef tqts
#undef tqst
#undef ttqs
#undef ttsq
#undef tsqt
#undef tstq
#undef sqtt
#undef stqt
#undef sttq
#undef qttt
#undef tqtt
#undef ttqt
#undef tttq
#undef qp
#undef pq
#undef qps
#undef qsp
#undef pqs
#undef psq
#undef sqp
#undef spq
#undef qpss
#undef qsps
#undef qssp
#undef pqss
#undef psqs
#undef pssq
#undef sqps
#undef sqsp
#undef spqs
#undef spsq
#undef ssqp
#undef sspq
#undef qpt
#undef qtp
#undef pqt
#undef ptq
#undef tqp
#undef tpq
#undef qpts
#undef qpst
#undef qtps
#undef qtsp
#undef qspt
#undef qstp
#undef pqts
#undef pqst
#undef ptqs
#undef ptsq
#undef psqt
#undef pstq
#undef tqps
#undef tqsp
#undef tpqs
#undef tpsq
#undef tsqp
#undef tspq
#undef sqpt
#undef sqtp
#undef spqt
#undef sptq
#undef stqp
#undef stpq
#undef qptt
#undef qtpt
#undef qttp
#undef pqtt
#undef ptqt
#undef pttq
#undef tqpt
#undef tqtp
#undef tpqt
#undef tptq
#undef ttqp
#undef ttpq
#undef qpp
#undef pqp
#undef ppq
#undef qpps
#undef qpsp
#undef qspp
#undef pqps
#undef pqsp
#undef ppqs
#undef ppsq
#undef psqp
#undef pspq
#undef sqpp
#undef spqp
#undef sppq
#undef qppt
#undef qptp
#undef qtpp
#undef pqpt
#undef pqtp
#undef ppqt
#undef pptq
#undef ptqp
#undef ptpq
#undef tqpp
#undef tpqp
#undef tppq
#undef qppp
#undef pqpp
#undef ppqp
#undef pppq
#undef qq
#undef qqs
#undef qsq
#undef sqq
#undef qqss
#undef qsqs
#undef qssq
#undef sqqs
#undef sqsq
#undef ssqq
#undef qqt
#undef qtq
#undef tqq
#undef qqts
#undef qqst
#undef qtqs
#undef qtsq
#undef qsqt
#undef qstq
#undef tqqs
#undef tqsq
#undef tsqq
#undef sqqt
#undef sqtq
#undef stqq
#undef qqtt
#undef qtqt
#undef qttq
#undef tqqt
#undef tqtq
#undef ttqq
#undef qqp
#undef qpq
#undef pqq
#undef qqps
#undef qqsp
#undef qpqs
#undef qpsq
#undef qsqp
#undef qspq
#undef pqqs
#undef pqsq
#undef psqq
#undef sqqp
#undef sqpq
#undef spqq
#undef qqpt
#undef qqtp
#undef qpqt
#undef qptq
#undef qtqp
#undef qtpq
#undef pqqt
#undef pqtq
#undef ptqq
#undef tqqp
#undef tqpq
#undef tpqq
#undef qqpp
#undef qpqp
#undef qppq
#undef pqqp
#undef pqpq
#undef ppqq
#undef qqq
#undef qqqs
#undef qqsq
#undef qsqq
#undef sqqq
#undef qqqt
#undef qqtq
#undef qtqq
#undef tqqq
#undef qqqp
#undef qqpq
#undef qpqq
#undef pqqq
#undef qqqq
