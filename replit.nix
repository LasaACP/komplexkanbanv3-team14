{ pkgs }: {
	deps = [
   pkgs.cmake
   pkgs.gh
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}