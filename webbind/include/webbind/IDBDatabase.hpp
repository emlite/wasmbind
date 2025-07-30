#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMStringList;
class IDBTransaction;
class IDBTransactionOptions;
class IDBObjectStore;
class IDBObjectStoreParameters;


class IDBTransactionOptions : public emlite::Val {
  explicit IDBTransactionOptions(Handle h) noexcept;
public:
    static IDBTransactionOptions take_ownership(Handle h) noexcept;
    explicit IDBTransactionOptions(const emlite::Val &val) noexcept;
    IDBTransactionOptions() noexcept;
    IDBTransactionOptions clone() const noexcept;
    IDBTransactionDurability durability() const;
    void durability(const IDBTransactionDurability& value);
};

class IDBObjectStoreParameters : public emlite::Val {
  explicit IDBObjectStoreParameters(Handle h) noexcept;
public:
    static IDBObjectStoreParameters take_ownership(Handle h) noexcept;
    explicit IDBObjectStoreParameters(const emlite::Val &val) noexcept;
    IDBObjectStoreParameters() noexcept;
    IDBObjectStoreParameters clone() const noexcept;
    jsbind::Any keyPath() const;
    void keyPath(const jsbind::Any& value);
    bool autoIncrement() const;
    void autoIncrement(bool value);
};

class IDBDatabase : public EventTarget {
    explicit IDBDatabase(Handle h) noexcept;

public:
    explicit IDBDatabase(const emlite::Val &val) noexcept;
    static IDBDatabase take_ownership(Handle h) noexcept;

    IDBDatabase clone() const noexcept;
    jsbind::String name() const;
    long long version() const;
    DOMStringList objectStoreNames() const;
    IDBTransaction transaction(const jsbind::Any& storeNames);
    IDBTransaction transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode);
    IDBTransaction transaction(const jsbind::Any& storeNames, const IDBTransactionMode& mode, const IDBTransactionOptions& options);
    jsbind::Undefined close();
    IDBObjectStore createObjectStore(const jsbind::String& name);
    IDBObjectStore createObjectStore(const jsbind::String& name, const IDBObjectStoreParameters& options);
    jsbind::Undefined deleteObjectStore(const jsbind::String& name);
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
    jsbind::Any onclose() const;
    void onclose(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
    jsbind::Any onversionchange() const;
    void onversionchange(const jsbind::Any& value);
};

