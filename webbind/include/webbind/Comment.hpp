#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CharacterData.hpp"
#include "enums.hpp"


class Comment : public CharacterData {
    explicit Comment(Handle h) noexcept;

public:
    explicit Comment(const emlite::Val &val) noexcept;
    static Comment take_ownership(Handle h) noexcept;

    Comment clone() const noexcept;
    Comment(const jsbind::DOMString& data);
};

