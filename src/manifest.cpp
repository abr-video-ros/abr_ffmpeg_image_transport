// -*-c++-*---------------------------------------------------------------------------------------
// Copyright 2023 Bernd Pfrommer <bernd.pfrommer@gmail.com>
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <pluginlib/class_list_macros.hpp>

#include "abr_ffmpeg_image_transport/abr_ffmpeg_publisher.hpp"
#include "abr_ffmpeg_image_transport/abr_ffmpeg_subscriber.hpp"

PLUGINLIB_EXPORT_CLASS(abr_ffmpeg_image_transport::ABRFFMPEGPublisher,
  image_transport::PublisherPlugin)
PLUGINLIB_EXPORT_CLASS(abr_ffmpeg_image_transport::ABRFFMPEGSubscriber,
  image_transport::SubscriberPlugin)
