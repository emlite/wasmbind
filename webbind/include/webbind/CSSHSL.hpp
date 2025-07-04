#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSHSL : public CSSColorValue {
    explicit CSSHSL(Handle h) noexcept;

public:
    explicit CSSHSL(const emlite::Val &val) noexcept;
    static CSSHSL take_ownership(Handle h) noexcept;

    CSSHSL clone() const noexcept;
    CSSHSL(const jsbind::Any& h, const jsbind::Any& s, const jsbind::Any& l, const jsbind::Any& alpha);
    jsbind::Any h() const;
    void h(const jsbind::Any& value);
    jsbind::Any s() const;
    void s(const jsbind::Any& value);
    jsbind::Any l() const;
    void l(const jsbind::Any& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

