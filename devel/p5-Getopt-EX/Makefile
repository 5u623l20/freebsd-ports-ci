PORTNAME=	Getopt-EX
PORTVERSION=	1.15.1
DISTVERSIONPREFIX=	v
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:UTASHIRO
PKGNAMEPREFIX=	p5-

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Getopt Extender
WWW=		https://metacpan.org/release/Getopt-EX

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	p5-Graphics-ColorNames>=0:graphics/p5-Graphics-ColorNames \
		p5-Moo>=1.001:devel/p5-Moo

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
