PORTNAME=	Chemistry-Reaction
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	science perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ITUB
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Represent a ring as a substructure of a molecule
WWW=		https://metacpan.org/release/Chemistry-Reaction

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Chemistry-Mol>=0:science/p5-Chemistry-Mol \
		p5-Chemistry-File-SMILES>=0:science/p5-Chemistry-File-SMILES \
		p5-Statistics-Regression>=0:math/p5-Statistics-Regression \
		p5-Chemistry-Pattern>=0:science/p5-Chemistry-Pattern
RUN_DEPENDS=	p5-Chemistry-Mol>=0:science/p5-Chemistry-Mol \
		p5-Chemistry-File-SMILES>=0:science/p5-Chemistry-File-SMILES \
		p5-Statistics-Regression>=0:math/p5-Statistics-Regression \
		p5-Chemistry-Pattern>=0:science/p5-Chemistry-Pattern

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
