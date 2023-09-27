all: install

install:
	mkdir build; cd view; cmake -S ./ -B ../build; cd ../build; make

gcov_report:
	cd model; make gcov_report

dvi:
	open ../README.md

dist: install
	rm -rf SmartCalc_v1.0_Archived/
	mkdir SmartCalc_v1.0_Archived/
	mkdir SmartCalc_v1.0_Archived/src
	cp -r ./build/SmartCalc.app SmartCalc_v1.0_Archived/src/
	tar cvzf SmartCalc_v1.0_Archived.tgz SmartCalc_v1.0_Archived/
	rm -rf SmartCalc_v1.0_Archived/

test:
	cd model; make test

clean: uninstall
	cd model; rm -rf arithmetic/source/*.o credit/*.o deposit/*.o tests/*.o *.a *.out
	rm -rf SmartCalc_v1.0_Archived.tgz
	rm -rf model/gcov_report
	rm -rf model/filtered.info smartcalc.a.info
	rm -rf model/smartcalc.a.info

uninstall:
	rm -rf build-view*
	rm -rf build