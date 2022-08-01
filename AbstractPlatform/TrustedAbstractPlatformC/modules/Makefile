COMMON_SOURCE=../../../Common/common-types.ucl
CACHE_SOURCE=./tap-mod-cache.ucl
AP_SOURCE=./ap-types.ucl
TAP_OP_SOURCES=./tap-mod-clone.ucl ./tap-mod-destroy.ucl ./tap-mod-enter.ucl ./tap-mod-exit.ucl ./tap-mod-launch.ucl ./tap-mod-pause.ucl ./tap-mod-resume.ucl ./tap-mod-snapshot.ucl ./tap-mod-block-memory-region.ucl ./tap-mod-release-memory-region.ucl
CPU_SOURCES=$(COMMON_SOURCE) $(AP_SOURCE) $(CACHE_SOURCE) ./tap-mod-cpu.ucl
TAP_SOURCES=$(CPU_SOURCES) $(TAP_OP_SOURCES) ./tap-mod.ucl ./tap-mod-control.ucl
MEASURE=./measure.ucl

tap:
	uclid --main tap $(TAP_SOURCES)
tap-printed:
	rm -rf smt
	mkdir smt
	uclid -g smt/tap --main tap $(TAP_SOURCES)
	./run_all_smt.sh
measure:
	uclid --main measure $(TAP_SOURCES) $(MEASURE)
