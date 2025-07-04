#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class Credential : public emlite::Val {
    explicit Credential(Handle h) noexcept;

public:
    explicit Credential(const emlite::Val &val) noexcept;
    static Credential take_ownership(Handle h) noexcept;

    Credential clone() const noexcept;
    jsbind::USVString id() const;
    jsbind::DOMString type() const;
    static jsbind::Promise isConditionalMediationAvailable();
    static jsbind::Promise willRequestConditionalCreation();
};

