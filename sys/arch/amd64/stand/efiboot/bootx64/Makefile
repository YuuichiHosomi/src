#	$OpenBSD: Makefile,v 1.3 2020/06/14 16:00:11 deraadt Exp $

.include <bsd.own.mk>

PROG=		BOOTX64.EFI
NOMAN=		#
OBJFMT=		efi-app-x86_64
SOFTRAID=	yes
COPTS+=		-I${EFIDIR}/include/amd64
SRCS+=		start_amd64.S run_i386.S mdrandom.c eficall.S
LDSCRIPT=	ldscript.amd64

.include "${.CURDIR}/../Makefile.common"

