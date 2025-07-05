#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"


class InstallEvent : public ExtendableEvent {
    explicit InstallEvent(Handle h) noexcept;

public:
    explicit InstallEvent(const emlite::Val &val) noexcept;
    static InstallEvent take_ownership(Handle h) noexcept;

    InstallEvent clone() const noexcept;
    InstallEvent(const jsbind::DOMString& type);
    InstallEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Promise addRoutes(const jsbind::Any& rules);
};

