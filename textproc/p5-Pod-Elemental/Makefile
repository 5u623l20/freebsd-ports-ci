PORTNAME=	Pod-Elemental
PORTVERSION=	0.103006
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Treating a Pod document as a tree of elements
WWW=		https://metacpan.org/release/Pod-Elemental

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-Load>=0:devel/p5-Class-Load \
		p5-Mixin-Linewise>=0:devel/p5-Mixin-Linewise \
		p5-Moose>=0:devel/p5-Moose \
		p5-MooseX-Types>=0:devel/p5-MooseX-Types \
		p5-Pod-Eventual>=0:textproc/p5-Pod-Eventual \
		p5-String-RewritePrefix>=0:textproc/p5-String-RewritePrefix \
		p5-String-Truncate>=0:textproc/p5-String-Truncate \
		p5-Sub-Exporter-ForMethods>=0:devel/p5-Sub-Exporter-ForMethods \
		p5-namespace-autoclean>=0:devel/p5-namespace-autoclean
TEST_DEPENDS=	p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Differences>=0:devel/p5-Test-Differences

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
