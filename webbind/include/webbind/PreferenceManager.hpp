#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PreferenceObject;


class PreferenceManager : public emlite::Val {
    explicit PreferenceManager(Handle h) noexcept;

public:
    explicit PreferenceManager(const emlite::Val &val) noexcept;
    static PreferenceManager take_ownership(Handle h) noexcept;

    PreferenceManager clone() const noexcept;
    PreferenceObject colorScheme() const;
    PreferenceObject contrast() const;
    PreferenceObject reducedMotion() const;
    PreferenceObject reducedTransparency() const;
    PreferenceObject reducedData() const;
};

