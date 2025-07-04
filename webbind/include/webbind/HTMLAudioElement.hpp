#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLMediaElement.hpp"
#include "enums.hpp"


class HTMLAudioElement : public HTMLMediaElement {
    explicit HTMLAudioElement(Handle h) noexcept;

public:
    explicit HTMLAudioElement(const emlite::Val &val) noexcept;
    static HTMLAudioElement take_ownership(Handle h) noexcept;

    HTMLAudioElement clone() const noexcept;
    HTMLAudioElement();
};

