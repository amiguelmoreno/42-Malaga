#!/bin/bash
git status --ignored -s | grep '!!' | cut -c4-
