#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLMediaElement.hpp"
#include "enums.hpp"


/// The HTMLAudioElement class.
/// [`HTMLAudioElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLAudioElement)
class HTMLAudioElement : public HTMLMediaElement {
    explicit HTMLAudioElement(Handle h) noexcept;

public:
    explicit HTMLAudioElement(const emlite::Val &val) noexcept;
    static HTMLAudioElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLAudioElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HTMLAudioElement(..)` constructor, creating a new HTMLAudioElement instance
    HTMLAudioElement();
};

