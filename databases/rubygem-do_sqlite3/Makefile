PORTNAME=	do_sqlite3
PORTVERSION=	0.10.17
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	voldern@hoeggen.net
COMMENT=	Ruby DataObjects driver to the SQLite DB engine version 3
WWW=		https://rubygems.org/gems/do_sqlite3

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3
RUN_DEPENDS=	rubygem-data_objects>=0.10.17:databases/rubygem-data_objects

USES=		gem

CONFIGURE_ARGS=	--with-sqlite3-dir=${LOCALBASE}

.include <bsd.port.mk>
