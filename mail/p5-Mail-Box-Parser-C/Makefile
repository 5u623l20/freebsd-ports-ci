PORTNAME=	Mail-Box-Parser-C
PORTVERSION=	3.011
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Parsing folders for Mail::Box with C routines
WWW=		https://metacpan.org/release/Mail-Box-Parser-C

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Mail-Box>=0:mail/p5-Mail-Box

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Mail/Box/Parser/C/C.so

.include <bsd.port.mk>
