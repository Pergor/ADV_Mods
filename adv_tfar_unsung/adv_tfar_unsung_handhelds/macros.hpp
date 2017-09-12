#define macro_additem(ITEM,ICOUNT) 	class _xx_##ITEM {\
										name = #ITEM;\
										count = ICOUNT;\
									};