PORTNAME=	Data-Model
PORTVERSION=	0.00008
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for model interface which had more data sources unified
WWW=		https://metacpan.org/release/Data-Model

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Trigger>=0:devel/p5-Class-Trigger \
		p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-DBI>=0:databases/p5-DBI \
		p5-Params-Validate>=0:devel/p5-Params-Validate
TEST_DEPENDS=	p5-Path-Class>=0:devel/p5-Path-Class \
		p5-Sub-Uplevel>=0:devel/p5-Sub-Uplevel \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat \
		p5-Test-Class>=0:devel/p5-Test-Class \
		p5-URI>=0:net/p5-URI

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

.include <bsd.port.mk>
