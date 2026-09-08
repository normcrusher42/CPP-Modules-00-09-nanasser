# PUT IN PROJECT DIRECTORY
# This was ai generated to quickly compile and clean all CPP exercises to ensure they compile correctly and clean up compiled leftovers before submissions

SUBDIRS := $(dir $(wildcard ./*/Makefile)) # THIS IS FOR ONLY ONE PROJECT DIRECTORY AT A TIME (Exercises within will all be checked)
# SUBDIRS := $(shell find . -mindepth 2 -name Makefile -exec dirname {} \;) # USE THIS FOR MULTIPLE PROJECT DIRECTORIES

doall:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir all; \
	done

fclean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir fclean; \
	done

.PHONY: fclean

reclean:
	@for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir re; \
		$(MAKE) -C $$dir fclean; \
	done

.PHONY: doall fclean reclean