PORTNAME=	readerwriterqueue
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.6
CATEGORIES=	devel

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Fast single-producer, single-consumer lock-free queue for C++
WWW=		https://github.com/cameron314/readerwriterqueue

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

USES=		cmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	cameron314

NO_ARCH=	yes

PLIST_FILES=	include/readerwriterqueue/LICENSE.md \
		include/readerwriterqueue/atomicops.h \
		include/readerwriterqueue/readerwritercircularbuffer.h \
		include/readerwriterqueue/readerwriterqueue.h

BINARY_ALIAS=	g++=${CXX}

do-test:
	@cd ${WRKSRC}/tests/unittests && ${SETENV} ${MAKE_ENV} ${GMAKE} run

.include <bsd.port.mk>
