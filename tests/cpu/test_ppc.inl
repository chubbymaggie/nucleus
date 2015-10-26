/**
 * (c) 2015 Alexandro Sanchez Bach. All rights reserved.
 * Released under GPL v2 license. Read LICENSE for more details.
 */

INSTRUCTION(addcx);
INSTRUCTION(addex);
INSTRUCTION(addi);
INSTRUCTION(addic);
INSTRUCTION(addic_);
INSTRUCTION(addis);
INSTRUCTION(addmex);
INSTRUCTION(addx);
INSTRUCTION(addzex);
INSTRUCTION(andcx);
INSTRUCTION(andi_);
INSTRUCTION(andis_);
INSTRUCTION(andx);
INSTRUCTION(bcctrx);
INSTRUCTION(bclrx);
INSTRUCTION(bcx);
INSTRUCTION(bx);
INSTRUCTION(cmp);
INSTRUCTION(cmpi);
INSTRUCTION(cmpl);
INSTRUCTION(cmpli);
INSTRUCTION(cntlzdx);
INSTRUCTION(cntlzwx);
INSTRUCTION(crand);
INSTRUCTION(crandc);
INSTRUCTION(creqv);
INSTRUCTION(crnand);
INSTRUCTION(crnor);
INSTRUCTION(cror);
INSTRUCTION(crorc);
INSTRUCTION(crxor);
INSTRUCTION(dcbf);
INSTRUCTION(dcbst);
INSTRUCTION(dcbt);
INSTRUCTION(dcbtst);
INSTRUCTION(dcbz);
INSTRUCTION(divdux);
INSTRUCTION(divdx);
INSTRUCTION(divwux);
INSTRUCTION(divwx);
INSTRUCTION(dss);
INSTRUCTION(dst);
INSTRUCTION(dstst);
INSTRUCTION(eciwx);
INSTRUCTION(ecowx);
INSTRUCTION(eieio);
INSTRUCTION(eqvx);
INSTRUCTION(extsbx);
INSTRUCTION(extshx);
INSTRUCTION(extswx);
INSTRUCTION(fabsx);
INSTRUCTION(faddsx);
INSTRUCTION(faddx);
INSTRUCTION(fcfidx);
INSTRUCTION(fcmpo);
INSTRUCTION(fcmpu);
INSTRUCTION(fctidx);
INSTRUCTION(fctidzx);
INSTRUCTION(fctiwx);
INSTRUCTION(fctiwzx);
INSTRUCTION(fdivsx);
INSTRUCTION(fdivx);
INSTRUCTION(fmaddsx);
INSTRUCTION(fmaddx);
INSTRUCTION(fmrx);
INSTRUCTION(fmsubsx);
INSTRUCTION(fmsubx);
INSTRUCTION(fmulsx);
INSTRUCTION(fmulx);
INSTRUCTION(fnabsx);
INSTRUCTION(fnegx);
INSTRUCTION(fnmaddsx);
INSTRUCTION(fnmaddx);
INSTRUCTION(fnmsubsx);
INSTRUCTION(fnmsubx);
INSTRUCTION(fresx);
INSTRUCTION(frspx);
INSTRUCTION(frsqrtex);
INSTRUCTION(fselx);
INSTRUCTION(fsqrtsx);
INSTRUCTION(fsqrtx);
INSTRUCTION(fsubsx);
INSTRUCTION(fsubx);
INSTRUCTION(icbi);
INSTRUCTION(isync);
INSTRUCTION(lbz);
INSTRUCTION(lbzu);
INSTRUCTION(lbzux);
INSTRUCTION(lbzx);
INSTRUCTION(ld);
INSTRUCTION(ldarx);
INSTRUCTION(ldbrx);
INSTRUCTION(ldu);
INSTRUCTION(ldux);
INSTRUCTION(ldx);
INSTRUCTION(lfd);
INSTRUCTION(lfdu);
INSTRUCTION(lfdux);
INSTRUCTION(lfdx);
INSTRUCTION(lfs);
INSTRUCTION(lfsu);
INSTRUCTION(lfsux);
INSTRUCTION(lfsx);
INSTRUCTION(lha);
INSTRUCTION(lhau);
INSTRUCTION(lhaux);
INSTRUCTION(lhax);
INSTRUCTION(lhbrx);
INSTRUCTION(lhz);
INSTRUCTION(lhzu);
INSTRUCTION(lhzux);
INSTRUCTION(lhzx);
INSTRUCTION(lmw);
INSTRUCTION(lswi);
INSTRUCTION(lswx);
INSTRUCTION(lvebx);
INSTRUCTION(lvehx);
INSTRUCTION(lvewx);
INSTRUCTION(lvlx);
INSTRUCTION(lvlxl);
INSTRUCTION(lvrx);
INSTRUCTION(lvrxl);
INSTRUCTION(lvsl);
INSTRUCTION(lvsr);
INSTRUCTION(lvx);
INSTRUCTION(lvxl);
INSTRUCTION(lwa);
INSTRUCTION(lwarx);
INSTRUCTION(lwaux);
INSTRUCTION(lwax);
INSTRUCTION(lwbrx);
INSTRUCTION(lwz);
INSTRUCTION(lwzu);
INSTRUCTION(lwzux);
INSTRUCTION(lwzx);
INSTRUCTION(mcrf);
INSTRUCTION(mcrfs);
INSTRUCTION(mffsx);
INSTRUCTION(mfocrf);
INSTRUCTION(mfspr);
INSTRUCTION(mftb);
INSTRUCTION(mfvscr);
INSTRUCTION(mtfsb0x);
INSTRUCTION(mtfsb1x);
INSTRUCTION(mtfsfix);
INSTRUCTION(mtfsfx);
INSTRUCTION(mtocrf);
INSTRUCTION(mtspr);
INSTRUCTION(mtvscr);
INSTRUCTION(mulhdux);
INSTRUCTION(mulhdx);
INSTRUCTION(mulhwux);
INSTRUCTION(mulhwx);
INSTRUCTION(mulldx);
INSTRUCTION(mulli);
INSTRUCTION(mullwx);
INSTRUCTION(nandx);
INSTRUCTION(negx);
INSTRUCTION(norx);
INSTRUCTION(orcx);
INSTRUCTION(ori);
INSTRUCTION(oris);
INSTRUCTION(orx);
INSTRUCTION(rldc_lr);
INSTRUCTION(rldiclx);
INSTRUCTION(rldicrx);
INSTRUCTION(rldicx);
INSTRUCTION(rldimix);
INSTRUCTION(rlwimix);
INSTRUCTION(rlwinmx);
INSTRUCTION(rlwnmx);
INSTRUCTION(sc);
INSTRUCTION(sldx);
INSTRUCTION(slwx);
INSTRUCTION(sradix);
INSTRUCTION(sradx);
INSTRUCTION(srawix);
INSTRUCTION(srawx);
INSTRUCTION(srdx);
INSTRUCTION(srwx);
INSTRUCTION(stb);
INSTRUCTION(stbu);
INSTRUCTION(stbux);
INSTRUCTION(stbx);
INSTRUCTION(std);
INSTRUCTION(stdcx_);
INSTRUCTION(stdu);
INSTRUCTION(stdux);
INSTRUCTION(stdx);
INSTRUCTION(stfd);
INSTRUCTION(stfdu);
INSTRUCTION(stfdux);
INSTRUCTION(stfdx);
INSTRUCTION(stfiwx);
INSTRUCTION(stfs);
INSTRUCTION(stfsu);
INSTRUCTION(stfsux);
INSTRUCTION(stfsx);
INSTRUCTION(sth);
INSTRUCTION(sthbrx);
INSTRUCTION(sthu);
INSTRUCTION(sthux);
INSTRUCTION(sthx);
INSTRUCTION(stmw);
INSTRUCTION(stswi);
INSTRUCTION(stswx);
INSTRUCTION(stvebx);
INSTRUCTION(stvehx);
INSTRUCTION(stvewx);
INSTRUCTION(stvlx);
INSTRUCTION(stvlxl);
INSTRUCTION(stvrx);
INSTRUCTION(stvrxl);
INSTRUCTION(stvx);
INSTRUCTION(stvxl);
INSTRUCTION(stw);
INSTRUCTION(stwbrx);
INSTRUCTION(stwcx_);
INSTRUCTION(stwu);
INSTRUCTION(stwux);
INSTRUCTION(stwx);
INSTRUCTION(subfcx);
INSTRUCTION(subfex);
INSTRUCTION(subfic);
INSTRUCTION(subfmex);
INSTRUCTION(subfx);
INSTRUCTION(subfzex);
INSTRUCTION(sync);
INSTRUCTION(td);
INSTRUCTION(tdi);
INSTRUCTION(tw);
INSTRUCTION(twi);
INSTRUCTION(vaddcuw);
INSTRUCTION(vaddfp);
INSTRUCTION(vaddsbs);
INSTRUCTION(vaddshs);
INSTRUCTION(vaddsws);
INSTRUCTION(vaddubm);
INSTRUCTION(vaddubs);
INSTRUCTION(vadduhm);
INSTRUCTION(vadduhs);
INSTRUCTION(vadduwm);
INSTRUCTION(vadduws);
INSTRUCTION(vand);
INSTRUCTION(vandc);
INSTRUCTION(vavgsb);
INSTRUCTION(vavgsh);
INSTRUCTION(vavgsw);
INSTRUCTION(vavgub);
INSTRUCTION(vavguh);
INSTRUCTION(vavguw);
INSTRUCTION(vcfsx);
INSTRUCTION(vcfux);
INSTRUCTION(vcmpbfpx);
INSTRUCTION(vcmpeqfpx);
INSTRUCTION(vcmpequbx);
INSTRUCTION(vcmpequhx);
INSTRUCTION(vcmpequwx);
INSTRUCTION(vcmpgefpx);
INSTRUCTION(vcmpgtfpx);
INSTRUCTION(vcmpgtsbx);
INSTRUCTION(vcmpgtshx);
INSTRUCTION(vcmpgtswx);
INSTRUCTION(vcmpgtubx);
INSTRUCTION(vcmpgtuhx);
INSTRUCTION(vcmpgtuwx);
INSTRUCTION(vctsxs);
INSTRUCTION(vctuxs);
INSTRUCTION(vexptefp);
INSTRUCTION(vlogefp);
INSTRUCTION(vmaddfp);
INSTRUCTION(vmaxfp);
INSTRUCTION(vmaxsb);
INSTRUCTION(vmaxsh);
INSTRUCTION(vmaxsw);
INSTRUCTION(vmaxub);
INSTRUCTION(vmaxuh);
INSTRUCTION(vmaxuw);
INSTRUCTION(vmhaddshs);
INSTRUCTION(vmhraddshs);
INSTRUCTION(vminfp);
INSTRUCTION(vminsb);
INSTRUCTION(vminsh);
INSTRUCTION(vminsw);
INSTRUCTION(vminub);
INSTRUCTION(vminuh);
INSTRUCTION(vminuw);
INSTRUCTION(vmladduhm);
INSTRUCTION(vmrghb);
INSTRUCTION(vmrghh);
INSTRUCTION(vmrghw);
INSTRUCTION(vmrglb);
INSTRUCTION(vmrglh);
INSTRUCTION(vmrglw);
INSTRUCTION(vmsummbm);
INSTRUCTION(vmsumshm);
INSTRUCTION(vmsumshs);
INSTRUCTION(vmsumubm);
INSTRUCTION(vmsumuhm);
INSTRUCTION(vmsumuhs);
INSTRUCTION(vmulesb);
INSTRUCTION(vmulesh);
INSTRUCTION(vmuleub);
INSTRUCTION(vmuleuh);
INSTRUCTION(vmulosb);
INSTRUCTION(vmulosh);
INSTRUCTION(vmuloub);
INSTRUCTION(vmulouh);
INSTRUCTION(vnmsubfp);
INSTRUCTION(vnor);
INSTRUCTION(vor);
INSTRUCTION(vperm);
INSTRUCTION(vpkpx);
INSTRUCTION(vpkshss);
INSTRUCTION(vpkshus);
INSTRUCTION(vpkswss);
INSTRUCTION(vpkswus);
INSTRUCTION(vpkuhum);
INSTRUCTION(vpkuhus);
INSTRUCTION(vpkuwum);
INSTRUCTION(vpkuwus);
INSTRUCTION(vrefp);
INSTRUCTION(vrfim);
INSTRUCTION(vrfin);
INSTRUCTION(vrfip);
INSTRUCTION(vrfiz);
INSTRUCTION(vrlb);
INSTRUCTION(vrlh);
INSTRUCTION(vrlw);
INSTRUCTION(vrsqrtefp);
INSTRUCTION(vsel);
INSTRUCTION(vsl);
INSTRUCTION(vslb);
INSTRUCTION(vsldoi);
INSTRUCTION(vslh);
INSTRUCTION(vslo);
INSTRUCTION(vslw);
INSTRUCTION(vspltb);
INSTRUCTION(vsplth);
INSTRUCTION(vspltisb);
INSTRUCTION(vspltish);
INSTRUCTION(vspltisw);
INSTRUCTION(vspltw);
INSTRUCTION(vsr);
INSTRUCTION(vsrab);
INSTRUCTION(vsrah);
INSTRUCTION(vsraw);
INSTRUCTION(vsrb);
INSTRUCTION(vsrh);
INSTRUCTION(vsro);
INSTRUCTION(vsrw);
INSTRUCTION(vsubcuw);
INSTRUCTION(vsubfp);
INSTRUCTION(vsubsbs);
INSTRUCTION(vsubshs);
INSTRUCTION(vsubsws);
INSTRUCTION(vsububm);
INSTRUCTION(vsububs);
INSTRUCTION(vsubuhm);
INSTRUCTION(vsubuhs);
INSTRUCTION(vsubuwm);
INSTRUCTION(vsubuws);
INSTRUCTION(vsum2sws);
INSTRUCTION(vsum4sbs);
INSTRUCTION(vsum4shs);
INSTRUCTION(vsum4ubs);
INSTRUCTION(vsumsws);
INSTRUCTION(vupkhpx);
INSTRUCTION(vupkhsb);
INSTRUCTION(vupkhsh);
INSTRUCTION(vupklpx);
INSTRUCTION(vupklsb);
INSTRUCTION(vupklsh);
INSTRUCTION(vxor);
INSTRUCTION(xori);
INSTRUCTION(xoris);
INSTRUCTION(xorx);