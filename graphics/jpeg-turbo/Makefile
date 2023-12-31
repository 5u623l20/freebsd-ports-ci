PORTNAME=	jpeg-turbo
DISTVERSION=	3.0.0
PORTREVISION?=	0
CATEGORIES=	graphics
MASTER_SITES=	SF/lib${PORTNAME}/${DISTVERSION}
DISTNAME=	lib${PORTNAME}-${DISTVERSION}

PATCH_SITES=	https://github.com/libjpeg-turbo/libjpeg-turbo/commit/
PATCHFILES=	035ea386d1b6a99a8a1e2ab57cc1fc903569136c.patch:-p1

MAINTAINER=	desktop@FreeBSD.org
COMMENT?=	SIMD-accelerated JPEG codec which replaces libjpeg
WWW?=		https://libjpeg-turbo.org/

LICENSE=		BSD3CLAUSE IJG ZLIB
LICENSE_COMB=		multi
LICENSE_GROUPS_IJG=	FSF GPL
LICENSE_NAME_IJG=	Independent JPEG Group License
LICENSE_FILE_BSD3CLAUSE=${WRKSRC}/LICENSE.md
LICENSE_FILE_IJG=	${WRKSRC}/README.ijg
LICENSE_FILE_ZLIB=	${WRKSRC}/LICENSE.md
LICENSE_PERMS_IJG=	dist-mirror dist-sell pkg-mirror pkg-sell auto-accept

USES=		cmake cpe pathfix
USE_LDCONFIG=	yes

CPE_PRODUCT=	libjpeg-turbo
TEST_TARGET=	test

PORTDOCS=	*
DOCSDIR=	${PREFIX}/share/doc/libjpeg-turbo

CMAKE_ON=	WITH_JPEG8
# See https://github.com/libjpeg-turbo/libjpeg-turbo/issues/705
CMAKE_ARGS=	-DCMAKE_CTEST_ARGUMENTS="-E;'djpeg12-shared-3x2-float-prog-cmp|djpeg12-static-3x2-float-prog-cmp'"

OPTIONS_DEFINE=		DOCS OPTIMIZED_CFLAGS
OPTIONS_DEFAULT=	OPTIMIZED_CFLAGS

OPTIMIZED_CFLAGS_CFLAGS=	-O3

.include <bsd.port.options.mk>

.if ${ARCH} == i386 || ${ARCH} == amd64
BUILD_DEPENDS+=	nasm:devel/nasm
.endif

.if ${ARCH} == armv6
CMAKE_OFF=	WITH_SIMD
.endif

.if ${SLAVE_PORT} == yes
PLIST_SUB+=	JPEG="@comment " LIBTURBOJPEG=""
.else
CMAKE_OFF+=	WITH_TURBOJPEG
CONFLICTS_INSTALL=	mozjpeg
PLIST_SUB+=	JPEG="" LIBTURBOJPEG="@comment "
.endif

.include <bsd.port.mk>
