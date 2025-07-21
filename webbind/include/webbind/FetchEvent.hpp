#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class Request;
class Response;


class FetchEvent : public ExtendableEvent {
    explicit FetchEvent(Handle h) noexcept;

public:
    explicit FetchEvent(const emlite::Val &val) noexcept;
    static FetchEvent take_ownership(Handle h) noexcept;

    FetchEvent clone() const noexcept;
    FetchEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    Request request() const;
    jsbind::Promise<jsbind::Any> preloadResponse() const;
    jsbind::DOMString clientId() const;
    jsbind::DOMString resultingClientId() const;
    jsbind::DOMString replacesClientId() const;
    jsbind::Promise<jsbind::Undefined> handled() const;
    jsbind::Undefined respondWith(const jsbind::Promise<Response>& r);
};

