#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSColorValue.hpp"
#include "enums.hpp"


class CSSColor : public CSSColorValue {
    explicit CSSColor(Handle h) noexcept;

public:
    explicit CSSColor(const emlite::Val &val) noexcept;
    static CSSColor take_ownership(Handle h) noexcept;

    CSSColor clone() const noexcept;
    CSSColor(const jsbind::Any& colorSpace, const jsbind::Sequence<jsbind::Any>& channels);
    CSSColor(const jsbind::Any& colorSpace, const jsbind::Sequence<jsbind::Any>& channels, const jsbind::Any& alpha);
    jsbind::Any colorSpace() const;
    void colorSpace(const jsbind::Any& value);
    jsbind::ObservableArray<jsbind::Any> channels() const;
    void channels(const jsbind::ObservableArray<jsbind::Any>& value);
    jsbind::Any alpha() const;
    void alpha(const jsbind::Any& value);
};

