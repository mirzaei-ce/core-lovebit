// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LOVEBIT_QT_LOVEBITADDRESSVALIDATOR_H
#define LOVEBIT_QT_LOVEBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LovebitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LovebitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Lovebit address widget validator, checks for a valid lovebit address.
 */
class LovebitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LovebitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LOVEBIT_QT_LOVEBITADDRESSVALIDATOR_H
