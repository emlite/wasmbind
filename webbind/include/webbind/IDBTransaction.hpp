#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMStringList;
class IDBDatabase;
class DOMException;
class IDBObjectStore;


class IDBTransaction : public EventTarget {
    explicit IDBTransaction(Handle h) noexcept;

public:
    explicit IDBTransaction(const emlite::Val &val) noexcept;
    static IDBTransaction take_ownership(Handle h) noexcept;

    IDBTransaction clone() const noexcept;
    DOMStringList objectStoreNames() const;
    IDBTransactionMode mode() const;
    IDBTransactionDurability durability() const;
    IDBDatabase db() const;
    DOMException error() const;
    IDBObjectStore objectStore(const jsbind::DOMString& name);
    jsbind::Undefined commit();
    jsbind::Undefined abort();
    jsbind::Any onabort() const;
    void onabort(const jsbind::Any& value);
    jsbind::Any oncomplete() const;
    void oncomplete(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

