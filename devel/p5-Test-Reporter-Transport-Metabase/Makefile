PORTNAME=	Test-Reporter-Transport-Metabase
PORTVERSION=	1.999010
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAGOLDEN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Metabase transport for Test::Reporter
WWW=		https://metacpan.org/release/Test-Reporter-Transport-Metabase

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-JSON>=0:converters/p5-JSON \
		p5-Config-Perl-V>0:devel/p5-Config-Perl-V \
		p5-CPAN-Testers-Report>0:devel/p5-CPAN-Testers-Report \
		p5-Metabase-Fact>0:devel/p5-Metabase-Fact \
		p5-Metabase-Client-Simple>0:devel/p5-Metabase-Client-Simple \
		p5-Test-Reporter>>1.54:devel/p5-Test-Reporter

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
