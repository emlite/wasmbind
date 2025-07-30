#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Client.hpp"
#include "enums.hpp"

class WindowClient;


class WindowClient : public Client {
    explicit WindowClient(Handle h) noexcept;

public:
    explicit WindowClient(const emlite::Val &val) noexcept;
    static WindowClient take_ownership(Handle h) noexcept;

    WindowClient clone() const noexcept;
    DocumentVisibilityState visibilityState() const;
    bool focused() const;
    jsbind::TypedArray<jsbind::String> ancestorOrigins() const;
    jsbind::Promise<WindowClient> focus();
    jsbind::Promise<WindowClient> navigate(const jsbind::String& url);
};

