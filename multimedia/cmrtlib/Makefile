PORTNAME=	cmrtlib
DISTVERSIONPREFIX=	intel-media-
DISTVERSION=	20.1.1
CATEGORIES=	multimedia

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C for Metal Runtime
WWW=		https://01.org/intel-media-for-linux

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC:H}/LICENSE.md

ONLY_FOR_ARCHS=	amd64 i386
ONLY_FOR_ARCHS_REASON=	only Intel GPUs on x86 are supported

LIB_DEPENDS=	libva.so:multimedia/libva

USES=		cmake compiler:c++17-lang pkgconfig
USE_GITHUB=	yes
USE_LDCONFIG=	yes
GH_ACCOUNT=	intel
GH_PROJECT=	media-driver
WRKSRC_SUBDIR=	${PORTNAME}

.include <bsd.port.mk>
