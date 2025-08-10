#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CharacterData.hpp"

namespace webbind {

/// Interface Comment
/// [`Comment`](https://developer.mozilla.org/en-US/docs/Web/API/Comment)
class Comment : public CharacterData {
    explicit Comment(Handle h) noexcept;
public:
    explicit Comment(const emlite::Val &val) noexcept;
    static Comment take_ownership(Handle h) noexcept;
    [[nodiscard]] Comment clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new Comment(..)` constructor, creating a new Comment instance
    Comment();
    /// The `new Comment(..)` constructor, creating a new Comment instance
    Comment(const jsbind::String& data);
};

} // namespace webbind