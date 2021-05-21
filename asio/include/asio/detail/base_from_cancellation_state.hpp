//
// detail/base_from_cancellation_state.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2021 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_BASE_FROM_CANCELLATION_STATE_HPP
#define ASIO_DETAIL_BASE_FROM_CANCELLATION_STATE_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "asio/detail/config.hpp"
#include "asio/associated_cancellation_slot.hpp"
#include "asio/cancellation_signal.hpp"
#include "asio/detail/type_traits.hpp"

#include "asio/detail/push_options.hpp"

namespace asio {
namespace detail {

template <typename Handler, typename = void>
class base_from_cancellation_state
{
public:
  typedef cancellation_slot cancellation_slot_type;

  cancellation_slot_type get_cancellation_slot() const ASIO_NOEXCEPT
  {
    return cancellation_state_.slot();
  }

protected:
  explicit base_from_cancellation_state(const Handler& handler)
    : cancellation_state_(
        asio::get_associated_cancellation_slot(handler))
  {
  }

  bool cancelled() const
  {
    return cancellation_state_.cancelled();
  }

private:
  cancellation_state cancellation_state_;
};

template <typename Handler>
class base_from_cancellation_state<Handler,
    typename enable_if<
      is_same<
        typename associated_cancellation_slot<Handler,
          cancellation_slot>::asio_associated_executor_is_unspecialised,
        void
      >::value
    >::type>
{
protected:
  explicit base_from_cancellation_state(const Handler&)
  {
  }

  ASIO_CONSTEXPR bool cancelled() const
  {
    return false;
  }
};

} // namespace detail
} // namespace asio

#include "asio/detail/pop_options.hpp"

#endif // ASIO_DETAIL_BASE_FROM_CANCELLATION_STATE_HPP
