///////////////////////////////////////////////////////////////////////////////
//
// CoinVault
//
// scriptmodel.h
//
// Copyright (c) 2013-2014 Eric Lombrozo
//
// All Rights Reserved.

#pragma once

#include <QStandardItemModel>

#include <CoinDB/Vault.h>

class ScriptModel : public QStandardItemModel
{
    Q_OBJECT

public:
    ScriptModel(QObject* parent = NULL);
    ScriptModel(CoinDB::Vault* vault, const QString& accountName, QObject* parent = NULL);

    void setVault(CoinDB::Vault* vault);
    void setAccount(const QString& accountName);
    void update();

private:
    void initColumns();

    CoinDB::Vault* vault;
    QString accountName; // empty when not loaded
};

