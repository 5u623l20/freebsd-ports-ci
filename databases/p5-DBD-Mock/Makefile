PORTNAME=	DBD-Mock
PORTVERSION=	1.59
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple mock DBD implementation used for testing
WWW=		https://metacpan.org/release/DBD-Mock

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBI>=1.3:databases/p5-DBI \
		p5-Test-Exception>=0.31:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
