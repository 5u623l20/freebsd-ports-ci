PORTNAME=	ksmtp
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Job-based library to send email through an SMTP server
WWW=		https://github.com/KDE/mailcommon

LICENSE=	LGPL21
LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2

USES=		cmake compiler:c++11-lib gettext kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons i18n kio service \
		ecm:build
# pim components
USE_KDE+=	mime
USE_QT=		concurrent core dbus network \
		buildtools:build qmake:build

USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
