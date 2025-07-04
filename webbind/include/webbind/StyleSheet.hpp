#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleSheet;
class MediaList;


class StyleSheet : public emlite::Val {
    explicit StyleSheet(Handle h) noexcept;

public:
    explicit StyleSheet(const emlite::Val &val) noexcept;
    static StyleSheet take_ownership(Handle h) noexcept;

    StyleSheet clone() const noexcept;
    jsbind::CSSOMString type() const;
    jsbind::USVString href() const;
    jsbind::Any ownerNode() const;
    CSSStyleSheet parentStyleSheet() const;
    jsbind::DOMString title() const;
    MediaList media() const;
    bool disabled() const;
    void disabled(bool value);
};

