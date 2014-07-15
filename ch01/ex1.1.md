> 1 Give a real-world example that requires sorting or a real-world example
> that requires computing a convex hull.

A ranking system requires to sort entries by a given score.

Travelling salesman problem can be solved by computing a convex hull in order
to find minimun path that goes to every point. Another possible example is
geospatial area, where given coordinates point we can generate the area covered
by them.

Note. The convex hull is the smallest convex polygon containing the points.

> 2 Other than speed, what other measures of efficiency might one use in a
> real-world setting?

* Number of operations required to converge to solution given the set of inputs
* Power consumption
* Time consuming (maybe related to speed?)
* Memory efficiency
* Parallel support

> 3 Select a data structure that you have seen previously, and discuss its
> strengths and limitations.

Linked list is easy to insert new values and iterate over the collection. However,
it is slow at removing and finding elements, since it requires at worst case
to traverse the entire list.

Binary Tree is fast at searching elements which is proportional to its height.
Insert is also easy. But, it may grow unbalanced, which my generate a tree that
has height proportional to its size. (for example, adding reversed items to it,
it will grow to its left)

> 4 How are the shortest-path and traveling-salesman problems given above
> similar? How are they different?

Both solves a problem that minimize costs. The difference in both is that the
shortest-path algorithm finds the path of small cost but does not require to
pass thru all nodes which traveling-salesman does.

> 5 Come up with a real-world problem in which only the best solution will
> do. Then come up with one in which a solution that is "approximately" the
> best is good enough.

...
