PORTNAME=	pkgconf
PORTVERSION=	2.0.3
PORTEPOCH=	1
CATEGORIES=	devel
MASTER_SITES=	https://distfiles.ariadne.space/${PORTNAME}/

# NOTE: before committing to this port, contact portmgr to arrange for an
# experimental ports run.  Untested commits may be backed out at portmgr's
# discretion.
MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Utility to help to configure compiler and linker flags
WWW=		https://git.sr.ht/~kaniini/pkgconf

LICENSE=	ISCL

TEST_DEPENDS=	kyua:devel/kyua

USES=		cpe tar:xz libtool pathfix
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
USE_LDCONFIG=	yes
TEST_TARGET=	check
CONFIGURE_ARGS=	--with-pkg-config-dir=${PREFIX}/libdata/pkgconfig:/usr/libdata/pkgconfig:${PREFIX}/share/pkgconfig \
		--with-system-libdir=/usr/lib \
		--with-system-includedir=/usr/include
MAKE_ARGS=	MANDIR="${MAN1PREFIX}/man/man1"

OPTIONS_DEFINE=	DOCS

post-install:
	${LN} -sf pkgconf ${STAGEDIR}${PREFIX}/bin/pkg-config

.include <bsd.port.mk>
