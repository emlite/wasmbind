#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class DOMException;
class IDBTransaction;


class IDBRequest : public EventTarget {
    explicit IDBRequest(Handle h) noexcept;

public:
    explicit IDBRequest(const emlite::Val &val) noexcept;
    static IDBRequest take_ownership(Handle h) noexcept;

    IDBRequest clone() const noexcept;
    jsbind::Any result() const;
    DOMException error() const;
    jsbind::Any source() const;
    IDBTransaction transaction() const;
    IDBRequestReadyState readyState() const;
    jsbind::Any onsuccess() const;
    void onsuccess(const jsbind::Any& value);
    jsbind::Any onerror() const;
    void onerror(const jsbind::Any& value);
};

