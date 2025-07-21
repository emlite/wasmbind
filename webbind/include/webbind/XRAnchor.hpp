#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class XRSpace;


class XRAnchor : public emlite::Val {
    explicit XRAnchor(Handle h) noexcept;

public:
    explicit XRAnchor(const emlite::Val &val) noexcept;
    static XRAnchor take_ownership(Handle h) noexcept;

    XRAnchor clone() const noexcept;
    XRSpace anchorSpace() const;
    jsbind::Promise<jsbind::DOMString> requestPersistentHandle();
    jsbind::Undefined delete_();
};

