/*
 * QEstEidUtil
 *
 * Copyright (C) 2011 Jargo Kõster <jargo@innovaatik.ee>
 * Copyright (C) 2011 Raul Metsma <raul@innovaatik.ee>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#pragma once

class CertStorePrivate;
class QSslCertificate;
class QString;

class CertStore
{
public:
	CertStore();
	~CertStore();

	bool add( const QSslCertificate &cert, const QString &card );
	bool find( const QSslCertificate &cert );
	bool remove( const QSslCertificate &cert );

private:
	CertStorePrivate *d;
};
