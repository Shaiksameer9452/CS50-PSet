SELECT AVG(rating)
FROM ratings
WHERE movie_id
in (select id from movies
WHERE year = 2012);
