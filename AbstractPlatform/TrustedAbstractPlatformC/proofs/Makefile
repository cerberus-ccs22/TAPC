COMMON_SOURCE=../../../Common/common-types.ucl
AP_SOURCE=./../modules/ap-types.ucl
CACHE_SOURCE=./../modules/tap-mod-cache.ucl
CPU_SOURCES=$(COMMON_SOURCE) $(AP_SOURCE) $(CACHE_SOURCE) ./../modules/tap-mod-cpu.ucl
TAP_OP_SOURCE=./../modules/tap-mod-clone.ucl ./../modules/tap-mod-destroy.ucl ./../modules/tap-mod-enter.ucl ./../modules/tap-mod-exit.ucl ./../modules/tap-mod-launch.ucl ./../modules/tap-mod-pause.ucl ./../modules/tap-mod-resume.ucl ./../modules/tap-mod-snapshot.ucl ./../modules/tap-mod-block-memory-region.ucl ./../modules/tap-mod-release-memory-region.ucl
TAP_SOURCES=$(CPU_SOURCES) $(TAP_OP_SOURCE) ./../modules/tap-mod.ucl 
PROOF_SOURCES=$(TAP_SOURCES) ./proof-common.ucl

MEASURE=./../modules/measure.ucl
MEASUREMENT_PROOF=./measurement-proof.ucl

INTEGRITY_PROOF=./integrity-proof.ucl ./integrity-proof-init.ucl ./integrity-proof-next.ucl ./../modules/tap-mod-integrity.ucl

MEM_CONF_PROOF=./../modules/tap-mod-conf.ucl ./mem-conf-proof.ucl ./mem-conf-proof-init.ucl 
PT_CONF_PROOF=./../modules/tap-mod-conf.ucl ./pt-confidentiality-proof.ucl
CACHE_CONF_PROOF=./../modules/tap-mod-conf.ucl ./cache-confidentiality-proof.ucl

INTEGRITY_PROOF_complete=./../modules/tap-mod-integrity/full-enc-step.ucl ./../modules/tap-mod-integrity/full-adv-step.ucl ./../modules/tap-mod-integrity/complete-transition-relation.ucl $(INTEGRITY_PROOF)
MEM_CONF_PROOF_complete=./../modules/tap-mod-conf/full-enc-step.ucl ./../modules/tap-mod-conf/full-obs-step.ucl ./../modules/tap-mod-conf/complete-transition-relation.ucl $(MEM_CONF_PROOF)
PT_CONF_PROOF_complete=./../modules/tap-mod-conf/full-enc-step.ucl ./../modules/tap-mod-conf/full-obs-step.ucl ./../modules/tap-mod-conf/complete-transition-relation.ucl $(PT_CONF_PROOF)
CACHE_CONF_PROOF_complete=./../modules/tap-mod-conf/full-enc-step.ucl ./../modules/tap-mod-conf/full-obs-step.ucl ./../modules/tap-mod-conf/complete-transition-relation.ucl $(CACHE_CONF_PROOF)

# Integrity proofs
INTEGRITY_PROOF_next=./integrity-proof.ucl ./integrity-proof-init-stub.ucl ./integrity-proof-next.ucl ./../modules/tap-mod-integrity.ucl
# (Enclave operations)
INTEGRITY_PROOF_e_compute_next=./../modules/tap-mod-integrity/e-compute.ucl ./../modules/tap-mod-integrity/full-adv-step.ucl $(INTEGRITY_PROOF_next)
INTEGRITY_PROOF_e_exit_next=./../modules/tap-mod-integrity/e-exit.ucl ./../modules/tap-mod-integrity/full-adv-step.ucl $(INTEGRITY_PROOF_next)
INTEGRITY_PROOF_e_pause_next=./../modules/tap-mod-integrity/e-pause.ucl ./../modules/tap-mod-integrity/full-adv-step.ucl $(INTEGRITY_PROOF_next)
INTEGRITY_PROOF_e_snapshot_next=./../modules/tap-mod-integrity/e-snapshot.ucl ./../modules/tap-mod-integrity/full-adv-step.ucl $(INTEGRITY_PROOF_next)
# (Observer operations)
INTEGRITY_PROOF_adv_block=./../modules/tap-mod-integrity/adv-block.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_compute=./../modules/tap-mod-integrity/adv-compute.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_clone=./../modules/tap-mod-integrity/adv-clone.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_destroy=./../modules/tap-mod-integrity/adv-destroy.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_enter=./../modules/tap-mod-integrity/adv-enter.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_exit=./../modules/tap-mod-integrity/adv-exit.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_snapshot=./../modules/tap-mod-integrity/adv-snapshot.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_launch=./../modules/tap-mod-integrity/adv-launch.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_pause=./../modules/tap-mod-integrity/adv-pause.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_release=./../modules/tap-mod-integrity/adv-release.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)
INTEGRITY_PROOF_adv_resume=./../modules/tap-mod-integrity/adv-resume.ucl ./../modules/tap-mod-integrity/full-enc-step.ucl $(INTEGRITY_PROOF)

# Memory confidentiality proofs
MEM_CONF_PROOF_next=./../modules/tap-mod-conf.ucl ./mem-conf-proof.ucl ./mem-conf-proof-init-stub.ucl
# (Enclave operations)
MEM_CONF_PROOF_e_compute_next=./../modules/tap-mod-conf/e-compute.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(MEM_CONF_PROOF_next)
MEM_CONF_PROOF_e_exit_next=./../modules/tap-mod-conf/e-exit.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(MEM_CONF_PROOF_next)
MEM_CONF_PROOF_e_pause_next=./../modules/tap-mod-conf/e-pause.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(MEM_CONF_PROOF_next)
MEM_CONF_PROOF_e_snapshot_next=./../modules/tap-mod-conf/e-snapshot.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(MEM_CONF_PROOF_next)
# (Observer operations)
MEM_CONF_PROOF_obs_block=./../modules/tap-mod-conf/obs-block.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_compute=./../modules/tap-mod-conf/obs-compute.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_clone=./../modules/tap-mod-conf/obs-clone.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_destroy=./../modules/tap-mod-conf/obs-destroy.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_enter=./../modules/tap-mod-conf/obs-enter.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_exit=./../modules/tap-mod-conf/obs-exit.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_snapshot=./../modules/tap-mod-conf/obs-snapshot.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_launch=./../modules/tap-mod-conf/obs-launch.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_pause=./../modules/tap-mod-conf/obs-pause.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_release=./../modules/tap-mod-conf/obs-release.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)
MEM_CONF_PROOF_obs_resume=./../modules/tap-mod-conf/obs-resume.ucl  ./../modules/tap-mod-conf/full-enc-step.ucl $(MEM_CONF_PROOF)

# PT confidentiality proofs
# (Enclave operations)
PT_CONF_PROOF_e_compute=./../modules/tap-mod-conf/e-compute.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_e_exit=./../modules/tap-mod-conf/e-exit.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_e_pause=./../modules/tap-mod-conf/e-pause.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(PT_CONF_PROOF)
# (Observer operations)
PT_CONF_PROOF_obs_block=./../modules/tap-mod-conf/obs-block.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_compute=./../modules/tap-mod-conf/obs-compute.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_destroy=./../modules/tap-mod-conf/obs-destroy.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_enter=./../modules/tap-mod-conf/obs-enter.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_exit=./../modules/tap-mod-conf/obs-exit.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_launch=./../modules/tap-mod-conf/obs-launch.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_pause=./../modules/tap-mod-conf/obs-pause.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_release=./../modules/tap-mod-conf/obs-release.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)
PT_CONF_PROOF_obs_resume=./../modules/tap-mod-conf/obs-resume.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(PT_CONF_PROOF)

# Cache confidentiality proofs
# (Enclave operations)
CACHE_CONF_PROOF_e_compute=./../modules/tap-mod-conf/e-compute.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_e_exit=./../modules/tap-mod-conf/e-exit.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_e_pause=./../modules/tap-mod-conf/e-pause.ucl ./../modules/tap-mod-conf/full-obs-step.ucl $(CACHE_CONF_PROOF)
# (Observer operations)
CACHE_CONF_PROOF_obs_block=./../modules/tap-mod-conf/obs-block.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_compute=./../modules/tap-mod-conf/obs-compute.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_destroy=./../modules/tap-mod-conf/obs-destroy.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_enter=./../modules/tap-mod-conf/obs-enter.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_exit=./../modules/tap-mod-conf/obs-exit.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_launch=./../modules/tap-mod-conf/obs-launch.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_pause=./../modules/tap-mod-conf/obs-pause.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_release=./../modules/tap-mod-conf/obs-release.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)
CACHE_CONF_PROOF_obs_resume=./../modules/tap-mod-conf/obs-resume.ucl ./../modules/tap-mod-conf/full-enc-step.ucl $(CACHE_CONF_PROOF)

# Measurement proof
measurement-proof-printed:
	rm -rf verify_log
	mkdir -p measurement
	rm -rf measurement-old
	mv measurement measurement-old
	mkdir measurement
	uclid -g measurement/measure --main measurement_proof $(PROOF_SOURCES) $(MEASURE) $(MEASUREMENT_PROOF) 
	./run_all_smt.sh measurement

# Stale
integrity-proof:
	uclid --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_complete)

# Stale
integrity-printed:
	mkdir -p integrity
	rm -rf integrity-old
	mv integrity integrity-old
	mkdir integrity
	uclid -g integrity/smt --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_complete)

# Verified
integrity-case-split:
	rm -rf verify_log

	# Enclave Compute operation
	rm -rf integrity-enc-compute
	mkdir -p integrity-enc-compute
	time uclid -g integrity-enc-compute/compute-next --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_e_compute_next)
	./run_all_smt.sh integrity-enc-compute

	# Enclave Exit operation
	rm -rf integrity-enc-exit
	mkdir -p integrity-enc-exit
	time uclid -g integrity-enc-exit/exit-next --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_e_exit_next)
	./run_all_smt.sh integrity-enc-exit

		# Enclave Pause operation
	rm -rf integrity-enc-pause
	mkdir -p integrity-enc-pause
	time uclid -g integrity-enc-pause/pause-next --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_e_pause_next)
	./run_all_smt.sh integrity-enc-pause

	# Enclave Snapshot operation 
	rm -rf integrity-enc-snapshot/
	mkdir -p integrity-enc-snapshot/
	time uclid -g integrity-enc-snapshot/snapshot --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_e_snapshot_next)
	./run_all_smt.sh integrity-enc-snapshot

	# Block operation 
	rm -rf integrity-adv-block
	mkdir -p integrity-adv-block
	time uclid -g integrity-adv-block/block --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_block)
	./run_all_smt.sh integrity-adv-block

	# Compute operation
	rm -rf integrity-adv-compute/
	mkdir -p integrity-adv-compute/
	time uclid -g integrity-adv-compute/compute --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_compute)
	./run_all_smt.sh integrity-adv-compute

	# Clone operation 
	rm -rf integrity-adv-clone/
	mkdir -p integrity-adv-clone/
	time uclid -g integrity-adv-clone/clone --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_clone)
	./run_all_smt.sh integrity-adv-clone

	# Destroy operation 
	rm -rf integrity-adv-destroy/
	mkdir -p integrity-adv-destroy/
	time uclid -g integrity-adv-destroy/destroy --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_destroy)
	./run_all_smt.sh integrity-adv-destroy

	# Enter operation 
	rm -rf integrity-adv-enter/
	mkdir -p integrity-adv-enter/
	time uclid -g integrity-adv-enter/enter --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_enter)
	./run_all_smt.sh integrity-adv-enter

	# Exit operation 
	rm -rf integrity-adv-exit/
	mkdir -p integrity-adv-exit/
	time uclid -g integrity-adv-exit/exit --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_exit)
	./run_all_smt.sh integrity-adv-exit

	# Snapshot operation 
	rm -rf integrity-adv-snapshot/
	mkdir -p integrity-adv-snapshot/
	time uclid -g integrity-adv-snapshot/snapshot --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_snapshot)
	./run_all_smt.sh integrity-adv-snapshot

	# Launch operation 
	rm -rf integrity-adv-launch/
	mkdir -p integrity-adv-launch/
	time uclid -g integrity-adv-launch/launch --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_launch)
	./run_all_smt.sh integrity-adv-launch

	# Pause operation 
	rm -rf integrity-adv-pause/
	mkdir -p integrity-adv-pause/
	time uclid -g integrity-adv-pause/pause --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_pause)
	./run_all_smt.sh integrity-adv-pause

	# Release operation 
	rm -rf integrity-adv-release/
	mkdir -p integrity-adv-release/
	time uclid -g integrity-adv-release/release --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_release)
	./run_all_smt.sh integrity-adv-release

	# Resume operation 
	rm -rf integrity-adv-resume/
	mkdir -p integrity-adv-resume/
	time uclid -g integrity-adv-resume/resume --main integrity_proof $(PROOF_SOURCES) $(INTEGRITY_PROOF_adv_resume)
	./run_all_smt.sh integrity-adv-resume

# Stale
mem-conf-proof:
	uclid --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_complete)

# Stale
mem-conf-printed:
	rm  -rf mem-conf-old
	mv mem-conf mem-conf-old
	mkdir mem-conf
	uclid -g mem-conf/smt --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_complete)

# Verifying
mem-conf-case-split:
	rm -rf verify_log

	# Enclave Compute operation
	rm -rf mem-conf-e-compute
	mkdir -p mem-conf-e-compute
	uclid -g mem-conf-e-compute/compute --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_e_compute_next)
	./run_all_smt.sh mem-conf-e-compute

	# Enclave exit operation
	rm -rf mem-conf-e-exit
	mkdir -p mem-conf-e-exit
	uclid -g mem-conf-e-exit/exit --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_e_exit_next)
	./run_all_smt.sh mem-conf-e-exit

	# Enclave pause operation
	rm -rf mem-conf-e-pause
	mkdir -p mem-conf-e-pause
	uclid -g mem-conf-e-pause/pause --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_e_pause_next)
	./run_all_smt.sh mem-conf-e-pause

	# Enclave pause operation
	rm -rf mem-conf-e-snapshot
	mkdir -p mem-conf-e-snapshot
	uclid -g mem-conf-e-snapshot/snapshot --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_e_snapshot_next)
	./run_all_smt.sh mem-conf-e-snapshot

	# Observer block operation
	rm -rf mem-conf-obs-block
	mkdir -p mem-conf-obs-block
	uclid -g mem-conf-obs-block/block --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_block)
	./run_all_smt.sh mem-conf-obs-block

	# Observer compute operation
	rm -rf mem-conf-obs-compute
	mkdir -p mem-conf-obs-compute
	uclid -g mem-conf-obs-compute/compute --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_compute)
	./run_all_smt.sh mem-conf-obs-compute

	# Clone operation
	rm -rf mem-conf-obs-clone/
	mkdir -p mem-conf-obs-clone/
	time uclid -g mem-conf-obs-clone/clone --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_clone)
	./run_all_smt.sh mem-conf-obs-clone

	# Observer destroy operation
	rm -rf mem-conf-obs-destroy
	mkdir -p mem-conf-obs-destroy
	uclid -g mem-conf-obs-destroy/destroy --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_destroy)
	./run_all_smt.sh mem-conf-obs-destroy

	# Observer enter operation
	rm -rf mem-conf-obs-enter
	mkdir -p mem-conf-obs-enter
	uclid -g mem-conf-obs-enter/enter --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_enter)
	./run_all_smt.sh mem-conf-obs-enter

	# Observer exit operation
	rm -rf mem-conf-obs-exit
	mkdir -p mem-conf-obs-exit
	uclid -g mem-conf-obs-exit/exit --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_exit)
	./run_all_smt.sh mem-conf-obs-exit

	# Observer exit operation
	rm -rf mem-conf-obs-snapshot
	mkdir -p mem-conf-obs-snapshot
	uclid -g mem-conf-obs-snapshot/snapshot --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_snapshot)
	./run_all_smt.sh mem-conf-obs-snapshot

	# Observer launch operation
	rm -rf mem-conf-obs-launch
	mkdir -p mem-conf-obs-launch
	uclid -g mem-conf-obs-launch/launch --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_launch)
	./run_all_smt.sh mem-conf-obs-launch

	# Observer pause operation
	rm -rf mem-conf-obs-pause
	mkdir -p mem-conf-obs-pause
	uclid -g mem-conf-obs-pause/pause --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_pause)
	./run_all_smt.sh mem-conf-obs-pause

	# Observer release operation
	rm -rf mem-conf-obs-release
	mkdir -p mem-conf-obs-release
	uclid -g mem-conf-obs-release/release --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_release)
	./run_all_smt.sh mem-conf-obs-release

	# Observer resume operation
	rm -rf mem-conf-obs-resume
	mkdir -p mem-conf-obs-resume
	uclid -g mem-conf-obs-resume/resume --main mem_confidentiality_proof $(PROOF_SOURCES) $(MEM_CONF_PROOF_obs_resume)
	./run_all_smt.sh mem-conf-obs-resume

pt-conf-proof:
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_complete)
pt-conf-printed:
	mkdir -p pt-conf
	rm  -rf pt-conf-old
	mv pt-conf pt-conf-old
	mkdir pt-conf
	uclid -g pt-conf/smt --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_complete)
pt-conf-case-split:
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_e_compute)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_e_exit)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_e_pause)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_block)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_compute)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_destroy)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_enter)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_exit)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_launch)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_pause)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_release)
	uclid --main pt_confidentiality_proof $(PROOF_SOURCES) $(PT_CONF_PROOF_obs_resume)

cache-conf-proof:
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_complete)
cache-conf-printed:
	mkdir -p cache-conf
	rm  -rf cache-conf-old
	mv cache-conf cache-conf-old
	mkdir cache-conf
	uclid -g cache-conf/smt --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_complete)
cache-conf-case-split:
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_e_compute)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_e_exit)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_e_pause)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_block)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_compute)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_destroy)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_enter)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_exit)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_launch)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_pause)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_release)
	uclid --main cache_confidentiality_proof $(PROOF_SOURCES) $(CACHE_CONF_PROOF_obs_resume)
