#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WorkletOptions;


class WorkletOptions : public emlite::Val {
  explicit WorkletOptions(Handle h) noexcept;
public:
    static WorkletOptions take_ownership(Handle h) noexcept;
    explicit WorkletOptions(const emlite::Val &val) noexcept;
    WorkletOptions() noexcept;
    WorkletOptions clone() const noexcept;
    RequestCredentials credentials() const;
    void credentials(const RequestCredentials& value);
};

class Worklet : public emlite::Val {
    explicit Worklet(Handle h) noexcept;

public:
    explicit Worklet(const emlite::Val &val) noexcept;
    static Worklet take_ownership(Handle h) noexcept;

    Worklet clone() const noexcept;
    jsbind::Promise addModule(const jsbind::USVString& moduleURL);
    jsbind::Promise addModule(const jsbind::USVString& moduleURL, const WorkletOptions& options);
};

