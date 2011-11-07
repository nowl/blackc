.PHONY: clean

all:
	cd black/src; $(MAKE) $(MFLAGS)
	cd blacklua/src; $(MAKE) $(MFLAGS)

clean:
	cd black/src; $(MAKE) $(MFLAGS) clean
	cd blacklua/src; $(MAKE) $(MFLAGS) clean